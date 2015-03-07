#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	if (s2[0] == 0)
		return ((char *)s1);
	while (s1[i])
	{
		if (s1[i] == s2[y])
		{
			y++;
			if (s2[y] == 0)
				return ((char *)&s1[i - y + 1]);
		}
		i++;
	}
	return (NULL);
}
