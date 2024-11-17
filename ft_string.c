/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:29:29 by hfegrach          #+#    #+#             */
/*   Updated: 2024/11/17 14:32:18 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_string(char *s)
{
    if (!s)
        return
    return (write(1, s, ft_strlen(s)));
}

// int main()
// {
//     printf("%d\n", ft_string("hello\n"));
// }