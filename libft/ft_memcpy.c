#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t len)
{
	char		*d;
	const char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = dest;
	s = src;
	while (len--)
		*d++ = *s++;
	return (dest);
}
