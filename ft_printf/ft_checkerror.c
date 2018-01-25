#include "libftprintf.h"

int		ft_checkerror(t_param **begin)
{
	t_param		*ptr;

	ptr = *begin;
	while (ptr)
	{
		if (ptr->error == 1)
			return (1);
		ptr = ptr->next;
	}
	return (0);
}
