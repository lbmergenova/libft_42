#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ldst;
	size_t	lsrc;
	char	*dstr;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	dstr = dst + ldst;
	if (ldst >= dstsize)
	{
		return (dstsize + lsrc);
	}
	return (ldst + ft_strlcpy(dstr, src, dstsize - ldst));
}
