#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_;
	unsigned char	*s2_;

	s1_ = (unsigned char *)s1;
	s2_ = (unsigned char *)s2;
	if (s1_ == NULL && s2_ == NULL)
		return (0);
	while (n)
	{
		if (*s1_ == *s2_)
		{
			s1_++;
			s2_++;
			n--;
		}
		else
			return (*s1_ - *s2_);
	}
	return (0);
}
