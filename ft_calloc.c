/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 01:41:13 by ngobert           #+#    #+#             */
/*   Updated: 2021/10/06 18:53:18 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Doit allouer la memoire necessaire pour un tableau de nmenmb elements de taille size_t octets et renvoie un pointeur vers la memoire allouee
// La zone sera remplie avec des zeros ?? (donc des int ???)
// Si nmemb ou size vaut zero on renvoi soit NULL, soit un pointeur unique??? (wtf???????????)

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;
	
	if (!(dest = malloc(count * size)))
		return (NULL);
	ft_bzero(dest, count * size);
	return (dest);
}
