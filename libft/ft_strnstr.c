#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (find[0] == '\0')
		return ((char*)s);
	while (s[i])
	{
		if (s[i] == find[0])
		{
			j = 0;
			while (find[j] && s[i + j] == find[j] && i + j < slen)
			{
				j++;
				if (find[j] == '\0')
					return ((char *)s + i);
			}
		}
		i++;
	}
	return (NULL);
}
