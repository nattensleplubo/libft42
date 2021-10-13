/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 01:57:46 by ngobert           #+#    #+#             */
/*   Updated: 2021/10/13 01:57:47 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

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
	return (dst);
}
