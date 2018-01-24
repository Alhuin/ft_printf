/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bigc.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jjanin-r <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/24 08:34:48 by jjanin-r     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/24 09:34:11 by jjanin-r    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

static void			ft_checklocale(wchar_t wc, t_param *ptr)
{
	if (MB_CUR_MAX == 1)
	{
		if (wc > 127 && wc < 256)
				ptr->wc = (char)wc;
		else if (wc < 0 || wc > 127 || (wc >= 0xD800 && wc <= 0xDFFF))
			ptr->error = 1;
	}
	else if (MB_CUR_MAX == 2)
	{
		if (wc < 0 || wc > 2047 || (wc >= 0xD800 && wc <= 0xDFFF))
			ptr->error = 1;
	}
	else if (MB_CUR_MAX == 3)
	{
		if (wc < 0 || wc > 65535 || (wc >= 0xD800 && wc <= 0xDFFF))
			ptr->error = 1;
	}
	else if (MB_CUR_MAX == 4)
	{
		if (wc < 0 || wc > 1114111 || (wc >= 0xD800 && wc <= 0xDFFF))
			ptr->error = 1;
	}
}

void			ft_bigc(t_param *ptr, va_list ap)
{
	ptr->wc = va_arg(ap, wchar_t);
	ft_checklocale(ptr->wc, ptr);
}

void		ft_getwstring(t_param *ptr)
{
	int i;

	i = 0;
	while (ptr->wstring[i] != '\0')
	{
		ft_checklocale(ptr->wstring[i], ptr);
		i++;
	}
}
