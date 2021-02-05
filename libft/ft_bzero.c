#include "libft.h"

void	ft_bzero(void *buf, size_t len)
{
	ft_memset(buf, 0, (size_t)len);
}
