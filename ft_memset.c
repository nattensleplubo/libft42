#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	int	i;

	i = 0;
	while (i <= len)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
}
