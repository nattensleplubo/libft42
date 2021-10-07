/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:51:30 by ngobert           #+#    #+#             */
/*   Updated: 2021/10/07 19:10:55 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != 0 && i < len)
	{
		j = 0;
		while (haystack[i + j] != '\0' && (i + j < len) && needle[j] != '\0'
		&& haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	const char	haystack[] = "Coca de piña";
	const char	needle[] = "de ";
	size_t		len = 15;

	printf("Faux strnstr : %s\n", ft_strnstr(haystack, needle, len));
	
	printf("%s\n", ft_strnstr("tacoucoucouleur", "coul", 11));
	printf("%s\n", strnstr("tacoucoucouleur", "coul", 11));
} 