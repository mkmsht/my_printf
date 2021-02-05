#include "../includes/ft_printf.h"

void	init_var(t_var *var)
{
	var->flag[0] = -1;
	var->flag[1] = -1;
	var->width = 0;
	var->minus = 0;
	var->dot = 0;
	var->accumulator = -1;
}

int		confirm_percent_back(t_var *var)
{
	var->format++;
	init_var(var);
	if (*(var->format) == '\0')
		return (-1);
	set_flag1(var);
	if (*(var->format) == '\0')
		return (-1);
	var->width = confirm_width_or_precision(var, 1);
	if (*(var->format) == '.')
	{
		var->dot = 1;
		var->format++;
		if (*(var->format) == '\0')
			return (-1);
		var->accumulator = confirm_width_or_precision(var, 0);
	}
	if (*(var->format) == '\0')
		return (-1);
	var->type = *(var->format);
	ft_main_print(var);
	return (1);
}

int		ft_printf(const char *format, ...)
{
	t_var var;

	va_start(var.args, format);
	var.format = (char*)format;
	var.number_of_characters = 0;
	if (format == NULL)
		return (-1);
	while (*(var.format) != '\0')
	{
		if (*(var.format) == '%')
		{
			if (confirm_percent_back(&var) == -1)
			{
				var.number_of_characters = -1;
				break ;
			}
		}
		else
			ft_putchar(*(var.format), &var);
		var.format++;
	}
	va_end(var.args);
	return (var.number_of_characters);
}
