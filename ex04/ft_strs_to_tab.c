#include "ft_stock_str.h"

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	tab = malloc((ac + 1) * sizeof(t_stock_str));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = malloc((tab[i].size + 1) * sizeof(char));
		if (tab[i].copy)
			strcpy(tab[i].copy, av[i]);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}
