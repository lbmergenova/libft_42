#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*a;

	a = (void *)malloc(nmemb * size);
	if (!a)
		return (NULL);
	ft_bzero(a, nmemb * size);
	return (a);
}
