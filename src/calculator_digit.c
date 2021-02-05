#include "../includes/ft_printf.h"

int				calculator_digit(long long n, int base)
{
	int		cnt;

	cnt = 1;
	while (n / base != 0)
	{
		n /= base;
		cnt++;
	}
	return (cnt);
}
