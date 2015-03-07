#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*res;

	res = (char *)malloc(sizeof(char) * (size + 1));
	if (res != NULL)
		res = ft_bzero(res, size);
	return (res);
}
