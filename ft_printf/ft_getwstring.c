/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_getwstring.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jjanin-r <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/24 01:28:52 by jjanin-r     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/24 02:37:05 by jjanin-r    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_getwstring(t_param *ptr)
{
	int i;

	i = 0;
	if (MB_CUR_MAX == 1)
	{
		while (ptr->wstring[i] != '\0')
		{
			if ((ptr->wstring[i] > 127) && (ptr->wstring[i] < 256))
				ptr->wstring[i] = (char)ptr->wstring[i];
			else if (ptr->wstring[i] < 0 || ptr->wstring[i] > 0x10FFFF
					|| ((ptr->wstring[i] >= 0xD800) &&
						(ptr->wstring[i] <= 0xDFFF)))
			{
				ptr->error = 1;
				break ;
			}
			i++;
		}
	}
}
