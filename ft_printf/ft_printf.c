/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jjanin-r <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/12 16:15:30 by jjanin-r     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/24 06:51:29 by jjanin-r    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int			ft_printf(const char *restrict format, ...)
{
	va_list		ap;
	int			ret;
	t_param		*ptr;
	t_param		*begin;

	begin = NULL;
	ret = 0;
	va_start(ap, format);
	ft_getparams(format, &begin, ap);
	ptr = begin;
	while (ptr)
	{
		if (ptr->type != 'n')
			ret = ft_print(ptr, ret);
		ptr = ptr->next;
	}
	ft_lsdel(&begin);
	return (ret);
}
