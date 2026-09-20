#include "header.h"

void	free_dict(t_entry *dict)
{
	t_entry *next;

	while (dict)
	{
		next = dict->next;
		free(dict->key);
		free(dict->value);
		free(dict);
		dict = next;
	}
}
