#include "libft.h"

static unsigned int	ft_sign(int nb)
{
	unsigned int nbr;

	nbr = (nb < 0) ? (unsigned int)-nb : (unsigned int)nb;
	return (nbr);
}

static int			digit(int nb)
{
	int i;

	i = 1;
	while (nb > 9)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char				*ft_itoa(int n)
{
	char			*new;
	unsigned int	nb;
	int				sign;
	size_t			len;
	size_t			i;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = (n < 0) ? 1 : 0;
	nb = ft_sign(n);
	len = digit(nb) + sign;
	new = (char *)malloc(sizeof(char) * len + 1);
	if (new == NULL)
		return (NULL);
	while (i < len - sign)
	{
		new[len - i - 1] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	if (sign == 1)
		new[0] = '-';
	new[len] = '\0';
	return (new);
}
