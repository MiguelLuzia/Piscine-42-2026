#include "ft_stock_str.h"
# include <stdlib.h>

int	ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	t_stock_str *stocks;

	i == 0;
	stocks = malloc(ac * sizeof(t_stock_str));
	if (stocks == NULL)
	{
		free(stocks);
		return (NULL);
	}
	
}