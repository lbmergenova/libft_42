#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*d_lst;

	while (*lst)
	{
		d_lst = *lst;
		*lst = (*lst)->next;
		(*del)(d_lst->content);
		free(d_lst);
	}
	lst = NULL;
}
