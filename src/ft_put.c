#include "../includes/ft_printf.h"

void			ft_putstr_n(char *s, t_var *var, int n)
{
	int i;

	i = 0;
	while (s[i] != '\0' && i < n)
		ft_putchar(s[i++], var);
}

void	ft_putchar(char c, t_var *var)
{
	write(1, &c, 1);
	var->number_of_characters++;
}

void		ft_putchar_n(char s, int n, t_var *var)
{
	int		i;

	i = 0;
	while (i < n)
	{
		ft_putchar(s, var);
		i++;
	}
}
