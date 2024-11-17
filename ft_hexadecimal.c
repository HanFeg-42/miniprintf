/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 09:46:36 by hfegrach          #+#    #+#             */
/*   Updated: 2024/11/17 14:36:09 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hexadecimal(unsigned long n, char c)
{
    if (n > 16)
        return (ft_hexadecimal(n / 16, c));
    if (c == 'x')
        return (write(1, &"0123456789abcdef"[n % 16], 1));
    else
        return (write(1, &"0123456789ABCDEF"[n % 16], 1));
}
