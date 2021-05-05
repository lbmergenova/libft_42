#include "libft.h"

static int	ft_isupper(int c);

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		c = c + 32;
	return (c);
}

static int	ft_isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	return (0);
}
