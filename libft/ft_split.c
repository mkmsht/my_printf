#include "libft.h"

static void		*ft_all_free(char **new, int cur)
{
	int	i;

	i = 0;
	while (i < cur)
	{
		free(new[i]);
		new[i] = NULL;
		i++;
	}
	free(new);
	return (NULL);
}

int				count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

char			*malloc_row(char const *s, char c)
{
	char	*row;
	int		i;

	i = 0;
	while (s[i] && *s != c)
		i++;
	row = (char *)malloc(sizeof(char) * (i + 1));
	if (row == NULL)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		row[i] = s[i];
		i++;
	}
	row[i] = '\0';
	return (row);
}

char			**ft_split(char const *s, char c)
{
	char	**new;
	int		i;

	new = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			new[i] = malloc_row(s, c);
			if (new[i] == NULL)
				return (ft_all_free(new, i));
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	new[i] = NULL;
	return (new);
}
