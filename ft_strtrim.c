/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 21:57:00 by ngobert           #+#    #+#             */
/*   Updated: 2021/10/10 16:09:36 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_set(char const *s1, char const *set)
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

static int	is_set(char a, char const *set)
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

static int	skip_set(char const *s1, char const *set, int start)
{
	int	i;
	int	j;

	i = start;
	j = 1;
	while (s1[i])
	{
		if (is_set(s1[i + 1], set) == 0 || is_set(s1[i + 1], set) == '\n')
			return (j);
		j++;
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
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
			i += skip_set(s1, set, i);
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
	char const	s1[] = "ewgh ewfciuhsfhd iuhdfsuh udifahsb dhf kjhdfsbkjchdskjf bahk";
	char const	set[] = "poiuytrewq;lkjhgfdsnbvxzm ";
	
	printf("Set in char : %d\n", count_set(s1, set));
	printf("Char len : %zu\n", ft_strlen(s1));
	printf("Sets : %s\n", set);
	printf("Untrimmed : %s\n", s1);
	printf("Trimmed : %s\n", ft_strtrim(s1, set));
}
