#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	c_;
	char	*str;

	c_ = (char)c;
	str = NULL;
	while (*s)
	{
		if (*s == c_)
			str = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (str);
}
