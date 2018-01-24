/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnode.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jjanin-r <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/20 16:35:03 by jjanin-r     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/24 01:21:44 by jjanin-r    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

t_param		*ft_inputnode(char **str)
{
	t_param *new;

	new = (t_param *)malloc(sizeof(*new));
	new->flag = 'a';
	new->flag1 = 'a';
	new->flag2 = 'a';
	new->flag3 = 'a';
	new->flag4 = 'a';
	new->width = 0;
	new->prec = 0;
	new->conv = 0;
	new->size = ft_strlen(*str);
	new->string = ft_strdup(*str);
	new->wstring = NULL;
	new->wc = 0;
	new->type = 's';
	new->ptr = NULL;
	new->error = 0;
	new->next = NULL;
	ft_strdel(str);
	return (new);
}
