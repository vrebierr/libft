#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*res;

	res = (t_list *)malloc(sizeof(t_list));
	if (res != NULL)
	{
		if (content != NULL)
		{
			res->content = (void *)content;
			res->content_size = content_size;
		}
		else
		{
			res->content = NULL;
			res->content_size = 0;
		}
		res->next = NULL;
	}
	return (res);
}
