#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	ls1;
	size_t	ls2;
	char	*ret;

	if (!s1 || !s2)
		return (NULL);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	ret = (char *)malloc((ls1 + ls2 + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, s1, ls1 + 1);
	ft_strlcat(ret, s2, ls1 + ls2 + 1);
	return (ret);
}
