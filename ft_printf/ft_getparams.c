/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_getparams.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jjanin-r <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/14 15:21:15 by jjanin-r     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/24 02:37:46 by jjanin-r    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_getparams(const char *restrict format, t_param **begin, va_list ap)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_color(ft_strdup(format));
	if ((ft_strchr(str, '%')) == NULL)
		ft_lstpush(begin, ft_inputnode(&str));
	else
		ft_mod(begin, &str, ap, 0);
	ft_strdel(&str);
}
