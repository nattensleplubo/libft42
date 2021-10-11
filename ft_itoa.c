/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:53:11 by ngobert           #+#    #+#             */
/*   Updated: 2021/10/11 16:20:20 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" //Alloue (avec malloc(3)) et retourne une chaine de caractères représentant l’integer reçu en argument. Les nombres négatifs doivent être gérés.

int		ft_len(int n)
{
	int	i;

	i = 0;
	while (n >= 0)
	{
		n = n / 10;
		i++;
	}
	return (1);
}

// char	*ft_itoa(int n)
// {
// 	char	*dest;
	
// 	dest = (char *)malloc(n + 1);
// }