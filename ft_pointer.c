/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:13:14 by hfegrach          #+#    #+#             */
/*   Updated: 2024/11/18 22:29:49 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long l)
{
	int ret;

	ret = 0;
	ret += ft_string("0x");
	ret += ft_hexadecimal(l, 'x');
	return (ret);
}