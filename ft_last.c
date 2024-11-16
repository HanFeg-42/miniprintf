/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:37:44 by hfegrach          #+#    #+#             */
/*   Updated: 2024/11/16 13:16:56 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

int ft_last(const char *s)
{
    int c;

    c = 0;
    while (*s)
    {
        if (*(s + 1) == '%')
        {
            if(*s == 'c')
                c++;
            else if(*s == 's')
                c++;
            else if(*s == 'p')
                c++;
            else if(*s == 'd')
                c++;
            else if(*s == 'i')
                c++;
            else if(*s == 'u')
                c++;
            else if(*s == 'x')
                c++;
            else if(*s == 'X')
                c++;
            s+=2;
        }
    }
    return c;
}
int main()
{
    printf("result : %d & should return 9\n", ft_last("chello %d%s%c%u%i%%%x%a%i%d%d thsnk u this"));
}