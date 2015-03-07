#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list	*res;
	t_list	*tmp;

	tmp = lst;
	res = f(tmp);
	while (tmp->next != NULL)
	{
		res->next = f(tmp->next);
		tmp = tmp->next;
	}
	return (res);
}
