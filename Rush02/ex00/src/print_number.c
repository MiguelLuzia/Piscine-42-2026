#include "header.h"

int	print_number(char *number, t_entry *dict, t_ctx *ctx)
{
	int		len;
	int		first_len;
	int		groups;
	int		g;
	int		start;
	int		width;
	int		power;
	int		all_zero;
	int		i;
	char	group[4];
	char	scale[64];

	if (number[0] == '0')
		return (print_word(dict, "0", ctx));
	len = ft_len(number);
	first_len = len % 3;
	if (first_len == 0)
		first_len = 3;
	groups = (len + 2) / 3;
	g = 0;
	while (g < groups)
	{
		if (g == 0)
		{
			start = 0;
			width = first_len;
		}
		else
		{
			start = first_len + ((g - 1) * 3);
			width = 3;
		}
		i = 0;
		while (i < 3)
			group[i++] = '0';
		i = 0;
		while (i < width)
		{
			group[3 - width + i] = number[start + i];
			i++;
		}
		group[3] = '\0';
		all_zero = (group[0] == '0' && group[1] == '0' && group[2] == '0');
		if (!all_zero)
		{
			if (!print_under_1000(group, dict, ctx))
				return (0);
			power = groups - g - 1;
			if (power > 0)
			{
				if (!make_scale_key(scale, 64, power))
					return (0);
				if (!print_word(dict, scale, ctx))
					return (0);
			}
		}
		g++;
	}
	return (1);
}
