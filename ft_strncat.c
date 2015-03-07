#include <string.h>
#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = (size_t)ft_strlen(s1);
	while (s2[i] && i < n)
	{
		s1[len + i] = s2[i];
		i++;
	}
	return (s1);
}
