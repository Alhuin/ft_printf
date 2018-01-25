/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_input.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jjanin-r <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/24 03:14:33 by jjanin-r     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/24 03:18:46 by jjanin-r    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_input(t_param **begin, char **str, int i)
{
	char	*tmp;

	tmp = ft_strsub(*str, 0, i);
	ft_lstpush(begin, ft_inputnode(&tmp));
	*str = *str + i;
}
