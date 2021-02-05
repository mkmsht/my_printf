#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct	s_var
{
	va_list		args;
	int			flag[2];
	char		*format;
	int			number_of_characters;
	int			width;
	int			accumulator;
	int			dot;
	int			minus;
	char		type;
}				t_var;
int				ft_printf(const char *format, ...);
int				confirm_percent_back(t_var *var);
void			set_flag1(t_var *var);
void			init_var(t_var *var);
void			ft_putchar(char c, t_var *var);
int				ft_strchr_n(char *s, char *c);
void			ft_main_print(t_var *var);
void			ft_putchar_n(char s, int n, t_var *var);
void			ft_print_char(t_var *var);
void			ft_print_str(t_var *var);
void			ft_print_per(t_var *var);
void			set_flag2(long *n, int *len, t_var *var, int judge);
void			ft_print_int(t_var *var);
void			ft_print_decimal(t_var *var);
void			ft_print_p(t_var *var);
void			ft_print_x(t_var *var, char *s);
int				confirm_width_or_precision(t_var *var, \
int check_digit);
void			ft_putstr_n(char *s, t_var *var, int n);
void			print_xx_base(char *s, unsigned long num, int base, \
t_var *var);
int				calculator_digit(long long n, int base);

#endif
