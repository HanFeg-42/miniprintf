/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:59:11 by hfegrach          #+#    #+#             */
/*   Updated: 2024/11/16 15:04:03 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

int	ft_decint(int n)
{
    int ret;
	long	nbr;

    ret = 0;
	nbr = n;
	if (nbr < 0)
	{
		ret += ft_character('-');
		nbr = -nbr;
	}
	if (nbr > 9)
		ret += ft_decint(nbr / 10);
	ret += ft_character(nbr % 10 + '0');
    return (ret);
}
