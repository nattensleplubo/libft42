/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 15:53:11 by ngobert           #+#    #+#             */
/*   Updated: 2021/10/12 12:37:55 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" //Alloue (avec malloc(3)) et retourne une chaine de caractères représentant l’integer reçu en argument. Les nombres négatifs doivent être gérés.

static int        ft_len(int n)
{
    int	i;

    i = (n < 0);
    if (n == 0)
        return (1);
    while (n != 0)
    {
        n = n / 10;
    	i++;
    }
    return (i);
}

char	*ft_itoa_neg(int n, char *dest)
{
	char	*dest;
	long	mod;
	long	div;
	int		temp;
	int		i;

	mod = 10;
	div = 1;
	i = ft_len(n) - 1;
	while (i > 0)
    {
        temp = (n % mod) / div;
        dest[i] = temp + 48;
        mod *= 10;
        div *= 10;
        i--;
    }
    dest[ft_len(n) + 1] = '\0';
    return (dest);
}

char    *ft_itoa(int n)
{
    char	*dest;
    long	mod;
    long	div;
    int		temp;
    int		i;
    
    mod = 10;
    div = 1;
    i = ft_len(n) - 1;
    dest = (char *)malloc(sizeof(char) * ft_len(n) + 1);
    if (!dest)
		return (NULL);
	if (n < 0)
	{
		return (ft_itoa_neg(n, dest));
	}
    while (i >= 0)
    {
        temp = (n % mod) / div;
        dest[i] = temp + 48;
        mod *= 10;
        div *= 10;
        i--;
    }
    dest[ft_len(n)] = '\0';
    return (dest);
}

int    main(void)
{
    int	i;

	i = -214748;
    printf("%s\n", ft_itoa(i));
}