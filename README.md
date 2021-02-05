# my_printf
I coded a simplified version of the printf function to understand about output and variable arguments in C.  
This project is compiled by Makefile(make all, etc.), and "libftprintf.a" is created.  
  
The name of the function is "ft_printf".  
The prototype of ft_printf is "int ft_printf(const char *, …);".  
  
• It doesn't the buffer management like the real printf.  
• It manages the following conversions: %c, s, p, d, i, u, x, and X.  
• It manages any combination of the following flags: ’-0.*’ and minimum fieldwidth with all conversions.  
