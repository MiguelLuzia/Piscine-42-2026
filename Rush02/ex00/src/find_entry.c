#include "header.h"

t_entry	*find_entry(t_entry *dict, char *key)
{
	while (dict)
	{
		if (ft_strcmp(dict->key, key) == 0)
			return (dict);
		dict = dict->next;
	}
	return (NULL);
}
