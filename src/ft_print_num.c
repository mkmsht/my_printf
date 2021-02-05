#include "../includes/ft_printf.h"

void		ft_print_int(t_var *var)
{
	long			n;
	int				len;

	n = (long)va_arg(var->args, int);
	len = calculator_digit(n, 10);
	set_flag2(&n, &len, var, 1);
	if (var->flag[1] == -1)
	{
		if (var->flag[0] == -1)
			ft_putchar_n(' ', var->width - var->minus - var->accumulator, var);
		ft_putchar_n('-', var->minus, var);
		if (var->flag[0] == 1)
			ft_putchar_n('0', var->width - var->minus - var->accumulator, var);
		ft_putchar_n('0', var->accumulator - len, var);
		if (len != 0)
			print_xx_base("0123456789", n, 10, var);
	}
	else
	{
		ft_putchar_n('-', var->minus, var);
		ft_putchar_n('0', var->accumulator - len, var);
		if (len != 0)
			print_xx_base("0123456789", n, 10, var);
		ft_putchar_n(' ', var->width - var->minus - var->accumulator, var);
	}
}

void		ft_print_decimal(t_var *var)
{
	long	n;
	int		len;

	n = (long)va_arg(var->args, unsigned int);
	len = calculator_digit(n, 10);
	set_flag2(&n, &len, var, 0);
	if (var->flag[1] == -1)
	{
		if (var->flag[0] == -1)
			ft_putchar_n(' ', var->width - var->minus - var->accumulator, var);
		if (var->flag[0] == 1)
			ft_putchar_n('0', var->width - var->minus - var->accumulator, var);
		ft_putchar_n('0', var->accumulator - len, var);
		if (len != 0)
			print_xx_base("0123456789", n, 10, var);
	}
	else
	{
		ft_putchar_n('0', var->accumulator - len, var);
		if (len != 0)
			print_xx_base("0123456789", n, 10, var);
		ft_putchar_n(' ', var->width - var->minus - var->accumulator, var);
	}
}

void		ft_print_p(t_var *var)
{
	long	n;
	int		len;

	n = (long)va_arg(var->args, void*);
	len = calculator_digit(n, 16);
	set_flag2(&n, &len, var, 0);
	if (var->flag[1] == -1)
	{
		if (var->flag[0] == -1)
			ft_putchar_n(' ', var->width - 2 - var->accumulator, var);
		ft_putstr_n("0x", var, 2);
		if (var->flag[0] == 1)
			ft_putchar_n('0', var->width - 2 - var->accumulator, var);
		ft_putchar_n('0', var->accumulator - len, var);
		if (len != 0)
			print_xx_base("0123456789abcdef", n, 16, var);
	}
	else
	{
		ft_putstr_n("0x", var, 2);
		ft_putchar_n('0', var->accumulator - len, var);
		if (len != 0)
			print_xx_base("0123456789abcdef", n, 16, var);
		ft_putchar_n(' ', var->width - 2 - var->accumulator, var);
	}
}

void		ft_print_x(t_var *var, char *s)
{
	long	n;
	int		len;

	n = (long)va_arg(var->args, unsigned int);
	len = calculator_digit(n, 16);
	set_flag2(&n, &len, var, 0);
	if (var->flag[1] == -1)
	{
		if (var->flag[0] == -1)
			ft_putchar_n(' ', var->width - var->accumulator, var);
		if (var->flag[0] == 1)
			ft_putchar_n('0', var->width - var->accumulator, var);
		ft_putchar_n('0', var->accumulator - len, var);
		if (len != 0)
			print_xx_base(s, n, 16, var);
	}
	else
	{
		ft_putchar_n('0', var->accumulator - len, var);
		if (len != 0)
			print_xx_base(s, n, 16, var);
		ft_putchar_n(' ', var->width - var->accumulator, var);
	}
}

void			print_xx_base(char *s, unsigned long num, int base, \
t_var *var)
{
	if (num < (unsigned long)base)
	{
		ft_putchar(s[num % base], var);
		return ;
	}
	print_xx_base(s, num / base, base, var);
	ft_putchar(s[num % base], var);
}
