#include "../includes/ft_printf.h"

int		ft_strchr_n(char *s, char *c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != *c)
		i++;
	if (s[i] == *c)
		return (i);
	return (-1);
}
