#include "header.h"

t_entry	*load_dict(char *file_name, int *status)
{
	int		fd;
	int		line_status;
	int		read_status;
	char	*line;
	t_entry	*entry;
	t_entry	*tail;
	t_entry	*dict;

	*status = 0;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (NULL);
	dict = NULL;
	tail = NULL;
	while (1)
	{
		line = read_line(fd, &read_status);
		if (!line)
		{
			if (read_status == -1)
			{
				close(fd);
				free_dict(dict);
				return (NULL);
			}
			break;
		}
		entry = parse_line(line, &line_status);
		free(line);
		if (line_status == -1)
		{
				close(fd);
				free_dict(dict);
				return (NULL);
		}
		if (!entry)
			continue;
		if (key_exists(dict, entry->key))
		{
			free(entry->key);
			free(entry->value);
			free(entry);
			close(fd);
			free_dict(dict);
			return (NULL);
		}
		if (!dict)
			dict = entry;
		else
			tail->next = entry;
		tail = entry;
	}
	close(fd);
	if (!dict)
		return (NULL);
	*status = 1;
	return (dict);
}
