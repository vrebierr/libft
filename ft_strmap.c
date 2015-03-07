#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		i;

	res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	i = 0;
	if (res != NULL)
	{
		while (s[i])
		{
			res[i] = f(s[i]);
			i++;
		}
	}
	res[i] = 0;
	return (res);
}
