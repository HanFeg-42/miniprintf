/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfegrach <hfegrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:24:22 by hfegrach          #+#    #+#             */
/*   Updated: 2024/11/19 14:21:48 by hfegrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		ret;
	va_list	ap;

	if (!s || write(1, 0, 0) == -1)
		return (-1);
	va_start(ap, s);
	ret = 0;
	while (*s)
	{
		if (*s == '%' && *(s + 1))
		{
			ret += ft_subprint(*(++s), ap);
		}
		else if (*s != '%')
		{
			ret += ft_character(*s);
		}
		s++;
	}
	va_end(ap);
	return (ret);
}
// int	main(void)
// {
// 	// int x = ft_printf("hello %% cv, my name is %s,%cI am %d yo \n", "Hanane", '\n', 23);
// 			// ft_printf("%d", x);

// 			int a = 1365;

// 			// int x = ft_printf("%c\t%s\t%p\t%d\t%i\t%u\t%x\t%X\t%%\t%walo\n%", a
// 			// 		- 1300, "salam", NULL, a, -a, -a, a, a);
// 			// int y = printf("%c\t%s\t%p\t%d\t%i\t%u\t%x\t%X\t%%\t%walo\n%", a
// 			// 		- 1300, "salam", NULL, a, -a, -a, a, a);
//             int x = printf("hU%x6_~]`x%dmmBR%u|HD@SgQW%dE#>U=~\n%%taPg%s\f1%%np19G:p96%X$U0u h$L%cjp2 OVV\n",
//                             1994048906, 1300021388, -288110800, 1323496628,
//                             "-*JQ[>u'\"BjDBGi!K55|2$aL_hgL5]g%}EKJ+A!pnc|N/%}[W?so\t92Qhas5?e[\\Y0$/L;ppR?sVyg\\", -1681650866,
//                             1102146047);
//             int y = ft_printf("hU%x6_~]`x%dmmBR%u|HD@SgQW%dE#>U=~\n%%taPg%s\f1%%np19G:p96%X$U0u h$L%cjp2 OVV\n",
//                             1994048906, 1300021388, -288110800, 1323496628,
//                             "-*JQ[>u'\"BjDBGi!K55|2$aL_hgL5]g%}EKJ+A!pnc|N/%}[W?so\t92Qhas5?e[\\Y0$/L;ppR?sVyg\\", -1681650866,
//                             1102146047);

// 			printf("%d\n%d\n", x, y);
// }