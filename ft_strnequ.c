#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int	res;

	res = ft_strncmp(s1, s2, n);
	if (res != 0)
		return (0);
	return (1);
}
