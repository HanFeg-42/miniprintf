/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:14:21 by hfegrach          #+#    #+#             */
/*   Updated: 2024/11/16 16:31:15 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

int ft_subprint(char c, va_list ap)
{
    int ret;

    ret = 0;
    // if(c == 'c')
    //     ret += ft_character(va_arg(ap, char));
    // else if(c == 's')
    //     ret += ft_string(va_arg(ap, char *));
    // else if(c == 'p')
    //     ret += ft_pointer(va_arg(ap, void *));
    // else if(c == 'd' || c == 'i')
    //     ret += ft_decint(va_arg(ap, int));
    // else if(c == 'u')
    //     ret += ft_unsigned(va_arg(ap, int));
    // else if(c == 'x')
    //     ret += ft_lowerhex(va_arg(ap, int));
    // else if(c == 'X')
    //     ret += ft_upperhex(va_arg(ap, int));
    // else if(c == '%')
    //     ret += ft_percent(c);
    // else
    //     ret = -1; hna chi erreur
    return (ret);
}
