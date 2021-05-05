#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	l;
	char	*ret;

	l = ft_strlen(s1);
	ret = (char *)malloc((l + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, s1, l + 1);
	return (ret);
}
