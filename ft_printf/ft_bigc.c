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

void		ft_bigc(t_param *ptr, va_list ap)
{
	ptr->wc = va_arg(ap, wchar_t);
	if (MB_CUR_MAX == 1)
	{
		if ((ptr->wc > 127) && (ptr->wc < 256))
			ptr->wc = (char)ptr->wc;
		else if (ptr->wc < 0 || ptr->wc > 255)
			ptr->error = 1;
	}
	else if (MB_CUR_MAX == 2)
	{
		if ((ptr->wc > 127) && (ptr->wc < 256))
			ptr->wc = (char)ptr->wc;
		else if (ptr->wc < 0 || ptr->wc > 2048)
			ptr->error = 1;
	}
	else if (MB_CUR_MAX == 3)
	{
		if ((ptr->wc > 127) && (ptr->wc < 256))
			ptr->wc = (char)ptr->wc;
		else if (ptr->wc < 0 || ptr->wc > 65536)
			ptr->error = 1;
	}
	else if (MB_CUR_MAX == 4)
	{
		if ((ptr->wc > 127) && (ptr->wc < 256))
			ptr->wc = (char)ptr->wc;
		else if (ptr->wc < 0 || ptr->wc > 1114112)
			ptr->error = 1;
	}

}
