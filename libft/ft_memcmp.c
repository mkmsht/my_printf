#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	unsigned char *b1;
	unsigned char *b2;

	b1 = (unsigned char *)buf1;
	b2 = (unsigned char *)buf2;
	while (count-- > 0)
	{
		if (*b1 != *b2)
			return (*b1 - *b2);
		b1++;
		b2++;
	}
	return (0);
}
