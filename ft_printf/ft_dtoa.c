/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_dtoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jjanin-r <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/24 08:34:48 by jjanin-r     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/24 09:08:09 by jjanin-r    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_dtoa(double nbr, int prec)
{
	char			*ret;
	long long int	nb;
	float			dec;

	nb = nbr / 1;
	if ((dec = nbr - nb) < 0)
		dec = -dec;
	while (prec-- > 0)
		dec *= 10;
	dec /= 1;
	if (prec == 0)
		ret = ft_itoa(nb);
	else
	{
		ret = ft_strjoinfree(ft_longitoa(nb), ".", 1);
		ret = ft_strjoinfree(ret, ft_longitoa(dec), 3);
	}
	return (ret);
}
