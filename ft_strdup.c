/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:05:37 by ngobert           #+#    #+#             */
/*   Updated: 2021/09/26 16:24:13 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int	i;
	
	i = ft_strlen(s1);
	printf("&d", i);
}

int	main(void)
{
	const char	caca[] = "Coucou";
	ft_strdup(caca);
}