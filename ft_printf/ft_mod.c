/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_mod.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jjanin-r <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 20:02:29 by jjanin-r     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/24 03:20:13 by jjanin-r    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

void		ft_mod(t_param **begin, char **str, va_list ap, int i)
{
	char	*str_pointer;

	str_pointer = *str;
	while ((*str)[i])
	{
		if ((*str)[i] == '%')
		{
			if (i != 0)
			{
				ft_input(begin, str, i);
				*str = *str + i;
			}
			else
				ft_getmod(begin, str, ap);
			i = -1;
		}
		i++;
	}
	if (i != 0)
		ft_input(begin, str, i);
	*str = str_pointer;
}
