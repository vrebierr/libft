#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*res;

	res = malloc(size);
	if (res != NULL)
		res = ft_bzero(res, size);
	return (res);
}
