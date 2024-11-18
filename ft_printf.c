/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:24:22 by hfegrach          #+#    #+#             */
/*   Updated: 2024/11/18 16:07:49 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *s, ...)
{
    int check;
    int ret;
    va_list ap;

    if (!s || write(1, 0, 0) == -1)
        return (-1);
    va_start(ap, s);
    check = 0;
    ret = 0;
    while(*s)
    {
        if(*s == '%')
        {
            ret += ft_subprint(*(s + 1), ap, &check);
            if (!check)
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
    // int x = ft_printf("hello %% cv, my name is %s,%cI am %d yo \n", "Hanane", '\n', 23);
    // ft_printf("%d", x);

    int a = 1365;
    
    int x = ft_printf("%c\t%s\t%p\t%d\t%i\t%u\t%x\t%X\t%%\t%walo\n%",a - 1300, "salam", &a, a, -a, -a, a, a);
    int y = printf("%c\t%s\t%p\t%d\t%i\t%u\t%x\t%X\t%%\t%walo\n%",a - 1300, "salam", &a, a, -a, -a, a, a);

    printf("%d\n%d\n", x, y);
}