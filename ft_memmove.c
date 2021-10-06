#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    int	i;

	if (len == 0)
		return (0);
	if (dst > src)
	{
		i = len;
		while (i >= 0)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i--;
		}
	}	
	else
	{
		i = 0;
		while (i <= len)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
}
