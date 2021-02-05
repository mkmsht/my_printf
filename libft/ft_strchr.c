#include "libft.h"

char	*ft_strchr(const char *p, int ch)
{
	char c;

	c = ch;
	if (*p == c)
		return (char*)p;
	while (*p++)
	{
		if (*p == c)
			return (char*)p;
	}
	return (0);
}
