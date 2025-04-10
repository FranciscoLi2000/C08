#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

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

void	ft_show_tab(t_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != '\0')
	{
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stock_str	*tab;

	if (argc < 2)
		return (1);
	tab = ft_strs_to_tab(argc - 1, argc + 1);
	if (!tab)
		return (1);
	ft_show_tab(tab);
	return (0);
}
