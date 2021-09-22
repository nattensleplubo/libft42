/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:18:49 by ngobert           #+#    #+#             */
/*   Updated: 2021/09/22 02:15:06 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;
	
	i = 0;
	while (i <= c)
	{
		while (!(((unsigned char *)s) [i]) == (((unsigned char *)s)[c])) // absolument deguelasse
		{
			if ((((unsigned char *)s) [i]) == (((unsigned char *)s)[c])) // wait c normé ca ? a verif sur vim
			{
				return ((void *)p + i);
			}
			i++;
		}
	}
	return (NULL); 
}
// a verif jsp si c bon mais je pense que si