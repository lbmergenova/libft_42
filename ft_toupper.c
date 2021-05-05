#include "libft.h"

static int	ft_islower(int c);

int	ft_toupper(int c)
{
	if (ft_islower(c))
		c = c - 32;
	return (c);
}

static int	ft_islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	return (0);
}
