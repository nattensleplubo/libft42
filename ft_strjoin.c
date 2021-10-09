/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 19:47:08 by ngobert           #+#    #+#             */
/*   Updated: 2021/10/09 21:47:04 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		str1;
	int		str2;
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str1 = ft_len(s1);
	str2 = ft_len(s2);
	if (!(dest = malloc(sizeof(char) * str1 + str2 + 1)))
		return (NULL);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[i])
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	return (dest);
}

int main(void)
{
	char const	s1[] = "Coucou les ";
	char const	s2[] = "copains";
	
	printf("%s\n", ft_strjoin(s1, s2));
}