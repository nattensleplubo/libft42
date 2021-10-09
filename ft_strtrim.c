/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 21:57:00 by ngobert           #+#    #+#             */
/*   Updated: 2021/10/09 22:27:34 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Alloue (avec malloc(3)) et retourne une copie de
la chaine ’s1’, sans les caractères spécifiés
dans ’set’ au début et à la fin de la chaine de
caractères.*/
#include "libft.h"
#include <string.h>

int	how_much_set(char const *s1, char const *set)
{
	int	i;
	int	check;
	int	set_count;

	i = 0;
	set_count = 0;
	while (s1[i])
	{
		check = 0;
		while (set[check])
		{
			if (set[check] == s1[i])
				set_count++;
			check++;
		}
		i++;
	}
	return (set_count);
}

//char	*ft_strtrim(char const *s1, char const *set)


int main(void)
{
	char const	s1[] = "Pipi popo";
	char const	set[] = "io ";
	
	printf("%d\n", how_much_set(s1, set));
	printf("%zu\n", ft_strlen((const char *)s1));
}
