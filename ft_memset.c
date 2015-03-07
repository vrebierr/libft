#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	tmp;
	unsigned char	*s;

	tmp = c;
	i = 0;
	s = b;
	while (i < len)
	{
		s[i] = tmp;
		i++;
	}
	return (b);
}
