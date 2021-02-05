#include "libft.h"

int		trim_judge(char c, char const *set)
{
	size_t i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		i;
	int		start;
	int		end;

	start = 0;
	while (s1[start] && trim_judge(s1[start], set))
		start++;
	end = ft_strlen((char *)s1);
	while (end > start && trim_judge(s1[end - 1], set))
		end--;
	new = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (start < end)
		new[i++] = s1[start++];
	new[i] = 0;
	return (new);
}
