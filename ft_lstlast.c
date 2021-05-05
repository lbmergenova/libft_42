#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	n;

	n = ft_lstsize(lst);
	while (n > 1)
	{
		lst = lst->next;
		n--;
	}
	return (lst);
}
