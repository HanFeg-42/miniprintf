#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>
# include <fcntl.h>

size_t	ft_strlen(const char *str);
int		ft_printf(const char *, ...);
int		ft_subprint(char c, va_list ap);
int		ft_character(char c);
int		ft_decint(int n);
int		ft_string(char *s);
int		ft_unsigned(unsigned int n);
int		ft_hexadecimal(unsigned long n, char c);
int		ft_pointer(unsigned long l);

#endif