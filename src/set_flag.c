#include "../includes/ft_printf.h"

void	set_flag1(t_var *var)
{
	int		n;

	while ((n = ft_strchr_n("0-", var->format)) >= 0)
	{
		var->flag[n] = 1;
		var->format++;
	}
}

void		set_flag2(long *n, int *len, t_var *var, int judge)
{
	if (*n < 0 && judge)
	{
		var->minus = 1;
		*n *= -1;
	}
	if ((*n == 0) && (var->dot == 1))
		*len = 0;
	var->accumulator = (var->accumulator < *len) \
	? *len : var->accumulator;
	if (var->flag[0] == 1 && var->dot == 1)
		var->flag[0] = -1;
}
