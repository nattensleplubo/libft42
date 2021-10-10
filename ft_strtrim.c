/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 21:57:00 by ngobert           #+#    #+#             */
/*   Updated: 2021/10/10 16:01:52 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Alloue (avec malloc(3)) et retourne une copie de
la chaine ’s1’, sans les caractères spécifiés
dans ’set’ au début et à la fin de la chaine de
caractères.*/
#include "libft.h"
#include <string.h>

static int	count_set(char const *s1, char const *set) // POUR LE MALLOC PAS UTILE POUR LA SUITE
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

static int	is_set(char a, char const *set) // RETURN 1 OU 0 EN FONCTION DE SI LE CHAR DONNE EST UN SET OU NON
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (a == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	skip_set(char const *s1, char const *set, int start) // Retourne le nombre de sets qui s'enchainent pour les skip
{
	int	i;
	int	j;

	i = start;
	j = 0;
	while (s1[i])
	{
		if (is_set(s1[i + 1], set) == 0 || is_set(s1[i + 1], set) == '\n')
		{
			printf("Skipped %d\n", j);
			return (j);
		}
		j++;
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set) // ENLEVE LES SETS
{
	char	*dest;
	int		i;
	int		k;
	
	i = 0;
	k = 0;
	dest = malloc(1 * ft_strlen(s1) - count_set(s1, set) + 1);
	if (!dest)
		return (NULL);
	while (s1[i])
	{
		if (is_set(s1[i], set))
		{
			i += skip_set(s1, set, i) + 1;
		}
		dest[k] = s1[i];
		k++;
		i++;
	}
	dest[k] = '\0';
	return (dest);
}


int main(void)
{
	char const	s1[] = "0122333444455555666666777777788888888999999999";
	char const	set[] = "0192837465";
	
	printf("%d\n", count_set(s1, set));
	printf("%zu\n", ft_strlen(s1));
	printf("%s\n", ft_strtrim(s1, set));
}
