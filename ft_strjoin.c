#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	res_len;

	res_len = ft_strlen(s1) + ft_strlen(s2);
	res = ft_strnew(res_len + 1);
	if (res != NULL)
	{
		res = ft_strcat(res, s1);
		res = ft_strcat(res, s2);
		res[res_len + 1] = 0;
	}
	return (res);
}
