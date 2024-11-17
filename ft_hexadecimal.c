/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 09:46:36 by hfegrach          #+#    #+#             */
/*   Updated: 2024/11/17 21:18:40 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hexadecimal(unsigned long n, char c)
{
    int re;

    re = 0;
    if (n > 15)
        re += ft_hexadecimal(n / 16, c);
    if (c == 'x')
        re += (write(1, &"0123456789abcdef"[n % 16], 1));
    else
        re += (write(1, &"0123456789ABCDEF"[n % 16], 1));
    return (re);
}
