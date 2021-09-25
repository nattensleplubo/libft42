/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 13:42:51 by ngobert           #+#    #+#             */
/*   Updated: 2021/09/25 14:11:02 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Localise la premiere occurence de c (converti en char) dans la string pointee par s. le \0 est considéré comme partie de la string
// donc si c est \0, la fonction doit localiser \0

// Elle doit retourner un pointeur sur sur le char localisé ou NULL si le char c n'apparait pas dans la string 

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if ((char)c == '\0')
		return ((char *)s);
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char)s);
		s++;
	}
	return (NULL);
}