#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new;
	size_t			s_len;

	if (!s)
		return (NULL);
	i = 0;
	s_len = ft_strlen((char *)s);
	if (!(new = (char *)malloc(sizeof(char) * (s_len + 1))))
		return (NULL);
	while (s[i])
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
