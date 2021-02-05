#include "libft.h"

void	*mempcpy(void *dest, const void *src, size_t len)
{
	return (ft_memcpy(dest, src, len) + len);
}

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	unsigned char *p;

	p = ft_memchr(src, (unsigned char)c, len);
	if (p != NULL)
		return (mempcpy(dest, src, p - (unsigned char *)src + 1));
	ft_memcpy(dest, src, len);
	return (NULL);
}
