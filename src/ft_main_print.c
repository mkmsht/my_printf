#include "../includes/ft_printf.h"

void		ft_main_print(t_var *var)
{
	if (var->type == 'c')
		ft_print_char(var);
	else if (var->type == 's')
		ft_print_str(var);
	else if (var->type == 'd' || var->type == 'i')
		ft_print_int(var);
	else if (var->type == 'u')
		ft_print_decimal(var);
	else if (var->type == 'p')
		ft_print_p(var);
	else if (var->type == 'x')
		ft_print_x(var, "0123456789abcdef");
	else if (var->type == 'X')
		ft_print_x(var, "0123456789ABCDEF");
	else if (var->type == '%')
		ft_print_per(var);
}
