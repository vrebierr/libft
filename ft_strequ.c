#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int	res;

	res = ft_strcmp(s1, s2);
	if (res != 0)
		return (0);
	return (1);
}
