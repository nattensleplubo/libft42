/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:51:30 by ngobert           #+#    #+#             */
/*   Updated: 2021/10/07 15:40:40 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return (haystack);
	while (haystack[i] != 0 && i <= len)
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (needle[j + 1] == '\0')
				return (haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	const char	haystack[] = "Coca de piña";
	const char	needle[] = "de";
	size_t		len = 8;

	printf("Vrai strnstr : %s\nFaux strnstr : %s", strnstr(haystack, needle, len), ft_strnstr(haystack, needle, len));
}