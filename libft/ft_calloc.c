#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	register void *ptr;

	if (nelem == 0 || elsize == 0)
	{
		nelem = 1;
		elsize = 1;
	}
	ptr = malloc(nelem * elsize);
	if (ptr == NULL)
		return (NULL);
	if (ptr)
		ft_bzero(ptr, nelem * elsize);
	return (ptr);
}
