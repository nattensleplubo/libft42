/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:18:49 by ngobert           #+#    #+#             */
/*   Updated: 2021/09/22 02:26:29 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char *	p;
	
	i = 0;
	p = (unsigned char *)s;
	while (i <= n)
	{
			//if ((((unsigned char *)s) [i]) == (((unsigned char *)s)[c])) // wait c normé ca ? a verif sur vim
			if (p[i] == (unsigned char)c)
				return ((void *)p + i);
			i++;
	}
	return (NULL); 
}
// a verif jsp si c bon mais je pense que si