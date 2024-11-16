/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:24:22 by hfegrach          #+#    #+#             */
/*   Updated: 2024/11/15 17:24:14 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_printf(const char *s, ...)
{
    int count;
    va_list ap;


    va_start(ap, s);
    while(*s)
    {
        if(*s++ == '%')
        {
            if(*s == 'c')
                return(ft_character(va_arg(ap, char)));
            else if(*s == 's')
                return(ft_string(va_arg(ap, char *)));
            else if(*s == 'p')
                return(ft_pointer(va_arg(ap, void *)));
            else if(*s == 'd')
                return(ft_decimal(va_arg(ap, int)));
            else if(*s == 'i')
                return(ft_integer(va_arg(ap, int)));
            else if(*s == 'u')
                return(ft_unsigned(va_arg(ap, int)));
            else if(*s == 'x')
                return(ft_lowerhex(va_arg(ap, int)));
            else if(*s == 'X')
                return(ft_upperhex(va_arg(ap, int)));
            else if(*s == '%')
                return(ft_percent(va_arg(ap, char)));
            *s++;
        }
    }
    va_end(ap);
    return;
}
