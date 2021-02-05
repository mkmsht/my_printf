#include "../includes/ft_printf.h"

int		confirm_width_or_precision(t_var *var, int check_digit)
{
	int		answer;

	if (*(var->format) != '*')
	{
		answer = 0;
		while (ft_isdigit(*(var->format)) && var->format)
			answer = answer * 10 + *(var->format++) - '0';
	}
	else
	{
		answer = va_arg(var->args, int);
		if (check_digit && answer < 0)
		{
			var->flag[1] = 1;
			answer *= -1;
		}
		else if (!check_digit && answer < 0)
		{
			var->dot = 0;
			var->accumulator = -1;
		}
		var->format++;
	}
	return (answer);
}
