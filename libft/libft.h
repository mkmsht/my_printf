#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

extern void			*ft_memset(void *dest, int ch, size_t len);
extern void			ft_bzero(void *buf, size_t len);
extern void			*ft_memcpy(void *restrict dest, \
	const void *restrict src, size_t len);
extern void			*ft_memchr(const void *dest, int ch, size_t len);
extern void			*ft_memccpy(void *dest, const void *src, int c, size_t len);
extern void			*ft_memmove(void *dest, const void *src, size_t len);
extern int			ft_memcmp(const void *str1, const void *str2, size_t count);
extern char			*ft_strchr(const char *p, int ch);
extern char			*ft_strdup(char *src);
extern unsigned int	ft_strlcat(char *dest, char *src, size_t size);
extern unsigned int	ft_strlcpy(char *dst, const char *src, size_t size);
extern int			ft_strlen(char *str);
extern int			ft_strncmp(char *s1, char *s2, size_t n);
extern char			*ft_strnstr(const char *s, const char *find, size_t slen);
extern char			*ft_strrchr(const char *p, int ch);
extern void			*ft_calloc(size_t nelem, size_t elsize);
extern int			ft_atoi(const char *str);
extern int			ft_isalpha(int c);
extern int			ft_isdigit(int c);
extern int			ft_isalnum(int c);
extern int			ft_isascii(int c);
extern int			ft_isprint(int c);
extern int			ft_toupper(int c);
extern int			ft_tolower(int c);
extern char			*ft_substr(char const *s, unsigned int start, size_t len);
extern char			*ft_strjoin(char const *s1, char const *s2);
extern char			*ft_strtrim(char const *s1, char const *set);
extern char			**ft_split(char const *s, char c);
extern char			*ft_itoa(int n);
extern char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
extern void			ft_putchar_fd(char c, int fd);
extern void			ft_putstr_fd(char *s, int fd);
extern void			ft_putendl_fd(char *s, int fd);
extern void			ft_putnbr_fd(int n, int fd);

#endif
