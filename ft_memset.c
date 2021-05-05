#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	c_;
	unsigned char	*str;

	c_ = (unsigned char)c;
	str = (unsigned char *)s;
	while (n > 0)
	{
		*str = c_;
		str++;
		n--;
	}
	return (s);
}
