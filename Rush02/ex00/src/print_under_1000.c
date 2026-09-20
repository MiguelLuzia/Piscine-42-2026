#include "header.h"

int	print_under_1000(char *group, t_entry *dict, t_ctx *ctx)
{
	char	key[4];

	if (group[0] != '0')
	{
		key[0] = group[0];
		key[1] = '\0';
		if (!print_word(dict, key, ctx))
			return (0);
		key[0] = '1';
		key[1] = '0';
		key[2] = '0';
		key[3] = '\0';
		if (!print_word(dict, key, ctx))
			return (0);
	}
	if (group[1] == '1')
	{
		key[0] = '1';
		key[1] = group[2];
		key[2] = '\0';
		if (!print_word(dict, key, ctx))
			return (0);
	}
	else
	{
		if (group[1] >= '2')
		{
			key[0] = group[1];
			key[1] = '0';
			key[2] = '\0';
			if (!print_word(dict, key, ctx))
				return (0);
		}
		if (group[2] != '0')
		{
			key[0] = group[2];
			key[1] = '\0';
			if (!print_word(dict, key, ctx))
				return (0);
		}
	}
	return (1);
}
