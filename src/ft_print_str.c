#include "../includes/ft_printf.h"

void		ft_print_char(t_var *var)
{
	char	c;

	c = (char)va_arg(var->args, int);
	if ((var->flag[0] == 1) && (var->flag[1] == -1))
		ft_putchar_n('0', var->width - 1, var);
	if (var->flag[0] == -1 && var->flag[1] == -1)
		ft_putchar_n(' ', var->width - 1, var);
	ft_putchar(c, var);
	if (var->flag[1] == 1)
		ft_putchar_n(' ', var->width - 1, var);
}

void		ft_print_str(t_var *var)
{
	char	*s;
	int		len;

	s = va_arg(var->args, char*);
	s = s ? s : "(null)";
	if (((int)ft_strlen(s) > var->accumulator) && (var->dot == 1))
		len = var->accumulator;
	else
		len = ft_strlen(s);
	if ((var->dot == 1) && (var->accumulator == 0))
		len = 0;
	if (var->flag[0] == 1 && var->flag[1] == -1)
		ft_putchar_n('0', var->width - len, var);
	if (var->flag[0] == -1 && var->flag[1] == -1)
		ft_putchar_n(' ', var->width - len, var);
	ft_putstr_n(s, var, len);
	if (var->flag[1] == 1)
		ft_putchar_n(' ', var->width - len, var);
}

void		ft_print_per(t_var *var)
{
	char	c;

	c = var->type;
	if (var->flag[0] == 1 && var->flag[1] == -1)
		ft_putchar_n('0', var->width - 1, var);
	if (var->flag[0] == -1 && var->flag[1] == -1)
		ft_putchar_n(' ', var->width - 1, var);
	ft_putchar(c, var);
	if (var->flag[1] == 1)
		ft_putchar_n(' ', var->width - 1, var);
}
