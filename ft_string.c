/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:29:29 by hfegrach          #+#    #+#             */
/*   Updated: 2024/11/16 21:18:58 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

int ft_string(char *s)
{
    return (write(1, s, ft_strlen(s)));
}

// int main()
// {
//     printf("%d\n", ft_string("hello\n"));
// }