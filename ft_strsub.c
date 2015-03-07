#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;

	res = ft_strnew(len + 1);
	i = 0;
	if (res != NULL)
	{
		while (i < len)
		{
			res[i] = s[start + i];
			i++;
		}
		res[i] = 0;
	}
	return (res);
}
