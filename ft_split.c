/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:54:01 by ngobert           #+#    #+#             */
/*   Updated: 2021/10/11 16:06:48 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	dest = malloc(sizeof(char *) * num_word(s, c) + 1);
	if (!dest)
		return (NULL);
	dest[num_word(s, c)] = NULL;
	while (s[i])
	{
		if (is_c(s[i], c) == 0)
		{
			j = 0;
			while (is_c(str[i + j], c) == 0 && str[i + j])
				j++;
			dest[k] = ft_splitter(&i, str, j);
			k++;
		}
		else
			i++;
	}
	return (dest);
}

int	is_c(char c, char charset)
{
	int	i;

	i = 0;
	if (charset == c)
		return (1);
	return (0);
}

char	*ft_splitter(int *i, char *str, int size)
{
	int		j;
	char	*dest;

	dest = malloc(sizeof(char) * size + 1);
	if (!dest)
		return (NULL);
	j = 0;
	while (j < size)
	{
		dest[j] = str[*i];
		j++;
		*i = *i + 1;
	}
	dest[size] = '\0';
	return (dest);
}

int	num_word(char *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (is_c(s[i], c) == 0)
		{
			counter++;
			while (is_c(s[i], c) == 0 && s[i])
				i++;
		}
		else
			i++;
	}
	return (counter);
}
