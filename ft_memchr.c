/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:18:49 by ngobert           #+#    #+#             */
/*   Updated: 2021/09/22 01:50:44 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;
	
	i = 0;
	while (i <= c)
	{
		if ((((unsigned char *)s) [i]) == (((unsigned char *)s)[c]) // absolument degeulasse
		i++;
	}
}