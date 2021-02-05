NAME = libftprintf.a

SRCS = \
	src/confirm_width_or_precision.c \
	src/ft_print_num.c \
	src/ft_print_str.c \
	src/ft_printf.c \
	src/ft_strchr_n.c \
	src/main_print.c \
	src/ft_put.c \
	src/calculator_digit.c \

CC = gcc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I./includes

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) -C libft
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) clean -C libft
	rm -rf $(OBJS)

fclean : clean
	$(MAKE) fclean -C libft
	rm -rf $(NAME)

re : fclean all
