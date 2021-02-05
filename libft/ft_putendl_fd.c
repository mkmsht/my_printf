#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		s_len;
	char	lf;

	s_len = ft_strlen(s);
	lf = '\n';
	write(fd, s, s_len);
	write(fd, &lf, 1);
}
