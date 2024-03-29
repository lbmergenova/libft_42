#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	l;
	char	*ret;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (start > l + 1)
	{
		ret = (char *)ft_calloc(1, sizeof(char));
		return (ret);
	}
	if (len > l - start + 1)
		len = l - start;
	ret = (char *)malloc((len + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, s + start, len + 1);
	return (ret);
}
