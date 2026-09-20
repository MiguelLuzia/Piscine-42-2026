#include "header.h"

int	key_exists(t_entry *dict, char *key)
{
	while (dict)
	{
		if (ft_strcmp(dict->key, key) == 0)
			return (1);
		dict = dict->next;
	}
	return (0);
}
