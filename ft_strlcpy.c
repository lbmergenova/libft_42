#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	ldst;
	size_t	lsrc;
	size_t	n;

	if (dst == NULL && src == NULL)
		return (0);
	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if (dstsize > 0)
	{
		if (lsrc >= dstsize)
			n = dstsize - 1;
		else
			n = lsrc;
		dst = ft_memcpy(dst, src, n);
		*(dst + n) = '\0';
	}
	return (lsrc);
}
