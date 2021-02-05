#include "libft.h"

void	*ft_memchr(const void *dest, int ch, size_t len)
{
	unsigned char	*d;
	size_t			n;

	d = (unsigned char *)dest;
	n = 0;
	while (n < len)
	{
		if (d[n] == (unsigned char)ch)
			return ((void *)&d[n]);
		n++;
	}
	return (NULL);
}
