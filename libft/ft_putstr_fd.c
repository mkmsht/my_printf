#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int s_len;

	s_len = ft_strlen(s);
	write(fd, s, s_len);
}
