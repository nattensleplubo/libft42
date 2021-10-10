/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 21:57:00 by ngobert           #+#    #+#             */
/*   Updated: 2021/10/10 18:30:28 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char a, char const *set) // GOOD
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

static int	skip_beg(char const *s1, char const *set)
{
	int	i;

	i = 0;
	if (is_set(s1[i], set) == 1)
	{
		while (is_set(s1[i], set) == 1)
			i++;
		return (i);
	}
	return (0);
}

static int	skip_end(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	if (is_set(s1[i], set) == 1)
	{
		while (is_set(s1[i], set) == 1)
		{
			i--;
			j++;
		}
		return (j);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		i;
	int		j;
	
	i = skip_beg(s1, set);
	j = 0;
	dest = malloc(ft_strlen(s1) - skip_beg(s1, set) + skip_end(s1, set) + 1);
	if (!dest)
		return (NULL);
	while ((size_t)i < ft_strlen(s1) - skip_end(s1, set))
	{
		dest[j] = s1[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char const	s1[] = "!!!failure>>>succes<<<failure!!!";
// 	char const	set[] = "failure!";
	
// 	printf("Char len	: %zu\n", ft_strlen(s1));
// 	printf("Set in char	: %d\n", skip_beg(s1, set) + skip_end(s1, set));
// 	printf("Beginning skip	: %d\n", skip_beg(s1, set));
// 	printf("End skip	: %d\n", skip_end(s1, set));
// 	printf("Sets		: %s\n", set);
// 	printf("Untrimmed	: %s\n", s1);
// 	printf("Trimmed		: %s\n", ft_strtrim(s1, set));
// }