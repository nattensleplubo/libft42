/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 21:57:00 by ngobert           #+#    #+#             */
/*   Updated: 2021/10/11 15:56:48 by ngobert          ###   ########.fr       */
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
	while (is_set(s1[i], set) == 1)
		i++;
	return (i);
}

static int	skip_end(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1) - 1;
	j = 0;

	while (is_set(s1[i], set) == 1)
	{
		i--;
		j++;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		i;
	int		j;
	
	i = skip_beg(s1, set);
	j = 0;
	dest = malloc(ft_strlen(s1) - i - skip_end(s1, set) + 1);
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
