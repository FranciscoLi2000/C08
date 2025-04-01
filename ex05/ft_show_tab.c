#include "ft_stock_str.h"

void	ft_show_tab(t_stock_str *par)
{
	int	i;

	i = 0;
	while (tab[i].str != '\0')
	{
		ft_putnbr(tab[i].size);
		write(1, "\n", 1);
		ft_putstr(tab[i].str);
		write(1, "\n", 1);
		ft_putstr(tab[i].copy);
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
