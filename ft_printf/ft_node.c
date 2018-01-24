/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_node.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jjanin-r <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/22 17:56:08 by jjanin-r     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/19 18:15:00 by jjanin-r    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

t_param	*ft_node(void)
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
	new->size = 0;
	new->string = NULL;
	new->wstring = NULL;
	new->wc = 0;
	new->type = 'a';
	new->ptr = NULL;
	new->error = 0;
	new->input = 0;
	new->next = NULL;
	return (new);
}
