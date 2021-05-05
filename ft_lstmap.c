#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*next;

	if (!lst)
		return (NULL);
	new = ft_lstnew((*f)(lst->content));
	if (!new)
		return (NULL);
	lst = lst->next;
	next = new;
	while (lst)
	{
		next->next = ft_lstnew((*f)(lst->content));
		if (!(next->next))
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		next = next->next;
		lst = lst->next;
	}
	return (new);
}
