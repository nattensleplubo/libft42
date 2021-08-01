#include "libft.h"

int	ft_atoi(char *str)
{
	int	atoi;
	int	is_negative;
	int	i;

	atoi = 0;
	is_negative = 1;
	i = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				is_negative = -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			atoi = (atoi * 10) + str[i] - 48;
			i++;
		}
		return (atoi * is_negative);
	}
	return (0);
}