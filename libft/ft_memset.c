#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t len)
{
	unsigned char *d;

	d = dest;
	while (len--)
		*d++ = ch;
	return (dest);
}
