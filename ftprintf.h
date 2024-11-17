#ifndef PRINTF_H
# define PRINTF_H

#include "libft/libft.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

int ft_printf(const char *, ...);
int ft_subprint(char c, va_list ap);
int ft_character(char c);
int	ft_decint(int n);
int ft_string(char *s);
int	ft_unsigned(unsigned int n);
size_t	ft_strlen(const char *str);

#endif