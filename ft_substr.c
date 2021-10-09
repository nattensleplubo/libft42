/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 19:20:44 by ngobert           #+#    #+#             */
/*   Updated: 2021/10/09 19:41:49 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	size_t				j;
	char				*dest;

	i = 0;
	j = 0;
	if(!(dest = malloc(sizeof(char) * len)))
		return (NULL);
	while (i < start)
		i++;
	while (j < len)
	{
		dest[j] = s[i];
		j++;
		i++;
	}
	return (dest);
}
