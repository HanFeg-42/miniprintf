/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:24:22 by hfegrach          #+#    #+#             */
/*   Updated: 2024/11/16 16:32:54 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ftprintf.h"

int ft_printf(const char *s, ...)
{
    int ret;
    va_list ap;

    va_start(ap, s);
    ret = 0;
    while(*s)
    {
        if(*s == '%')
        {
            ret += ft_subprint(*(s + 1), ap);
            s += 2;
        }
        else
        {
            ret += ft_character(*s);
            s++;
        }
    }
    va_end(ap);
    return (ret);
}
int main()
{
    ft_printf("hello%% cv\n");
}