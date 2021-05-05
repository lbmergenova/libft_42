#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	c_;
	unsigned char	*destc;
	unsigned char	*srcc;

	i = 0;
	c_ = (unsigned char)c;
	destc = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	if (destc == NULL && srcc == NULL)
		return (NULL);
	while (i < n)
	{
		*destc++ = *srcc++;
		if (*(destc - 1) == c_)
			return (destc);
		i++;
	}
	return (NULL);
}
