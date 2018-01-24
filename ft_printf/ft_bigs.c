/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bigs.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jjanin-r <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/19 19:09:31 by jjanin-r     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/24 01:39:19 by jjanin-r    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_bigs(t_param *ptr, va_list ap)
{
	if (!(ptr->wstring = va_arg(ap, wchar_t *)))
	{
		ptr->string = ft_strdup("(null)");
		ptr->type = 's';
	}
	else
		ft_getwstring(ptr);
}
