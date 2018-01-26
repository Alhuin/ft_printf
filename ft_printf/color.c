#include "libftprintf.h"

static char		*ft_checkcolor(char *str)
{
	if (ft_strncmp(str, "{red}", 5) == 0)
		return (ft_strdup("\033[31m"));
	else if (ft_strncmp(str, "{black}", 7) == 0)
		return (ft_strdup("\033[30m"));
	else if (ft_strncmp(str, "{blue}", 6) == 0)
		return (ft_strdup("\033[34m"));
	else if (ft_strncmp(str, "{white}", 7) == 0)
		return (ft_strdup("\033[37m"));
	else if (ft_strncmp(str, "{cyan}", 6) == 0)
		return (ft_strdup("\033[36m"));
	else if (ft_strncmp(str, "{yellow}", 8) == 0)
		return (ft_strdup("\033[33m"));
	else if (ft_strncmp(str, "{magenta}", 9) == 0)
		return (ft_strdup("\033[35m"));
	else if (ft_strncmp(str, "{green}", 7) == 0)
		return (ft_strdup("\033[32m"));
	return (NULL);
}

static char		*ft_strreplace(int f, char *dst, char *src, int start, int end)
{
	char	*ret;
	int i;
	int j;

	j = 0;
	i = ft_strlen(dst) - (end - start) + ft_strlen(src);
	ret = malloc(sizeof(char) + i + 2);
	i = 0;
	while (i < start)
	{
		ret[i] = dst[i];
		i++;
	}
	while (src[j])
		ret[i++] = src[j++];
	while (dst[++end])
		ret[i++] = dst[end];
	ret[i] = '\0';
	if (f == 1 || f == 3)
		ft_strdel(&dst);
	if (f == 2 || f == 3)
		ft_strdel(&src);
	return (ret);
}

char	*ft_color(char *str)
{
	int i;
	int j;
	char	*code;

	j = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '{')
		{
			j = 0;
			if ((code = ft_checkcolor(str + i)) != NULL)
			{
				while (str[i + j] != '}')
					j++;
				str = ft_strreplace(3, str, code, i, i + j);
			}
			else if (ft_strncmp(str + i, "{eoc}", 5) == 0)
			{
				str = ft_strreplace(1, str, "\033[m", i, i + 4);
			}
		}
	i++;
	}
	return (str);
}



