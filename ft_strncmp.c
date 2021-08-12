/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:24:11 by ngobert           #+#    #+#             */
/*   Updated: 2021/08/12 15:29:58 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;
	
	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (s2[i] && s1[i]) && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}