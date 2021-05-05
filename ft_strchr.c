#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c_;

	c_ = (char)c;
	while (*s)
	{
		if (*s == c_)
			return ((char *)s);
		s++;
	}
	if (c_ == 0)
		return ((char *)s);
	return (NULL);
}
