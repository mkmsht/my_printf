#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	t;
	size_t	w;
	size_t	m_size;

	i = 0;
	t = 0;
	w = 0;
	m_size = 0;
	while (dest[i])
		i++;
	while (src[t])
		t++;
	if (size < i)
		m_size = t + size;
	else
		m_size = i + t;
	if (size == 0)
		return (m_size);
	while (i < size - 1 && src[w] != '\0')
	{
		dest[i++] = src[w++];
	}
	dest[i] = '\0';
	return (m_size);
}
