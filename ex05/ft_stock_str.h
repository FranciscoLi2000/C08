#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

typedef struct s_stock_str
{
	char	*str;
	char	*copy;
	int		size;
}	t_stock_str;

#endif
