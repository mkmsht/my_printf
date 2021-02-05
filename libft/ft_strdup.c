#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*new;

	i = 0;
	while (src[i] != '\0')
		i++;
	new = malloc(sizeof(char) * i + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
