#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			ls;
	char			*ret;

	i = 0;
	if (!s)
		return (NULL);
	ls = ft_strlen(s);
	ret = malloc((ls + 1) * sizeof(char));
	if (ret)
	{
		while (i < ls)
		{
			ret[i] = (*f)(i, *s);
			s++;
			i++;
		}
		ret[ls] = '\0';
		return (ret);
	}
	else
		return (NULL);
}
