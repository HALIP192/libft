/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:33:08 by ntitan            #+#    #+#             */
/*   Updated: 2021/10/14 17:33:15 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_abs(int n)
{
	if (n < 0)
		return (n * (-1));
	return (n);
}

int	ft_numlen(int nbr)
{
	size_t	buff;
	size_t	i;

	buff = 1;
	i = 0;
	while (nbr / buff > 0)
	{
		buff *= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	size_t	i;
	char	*str;
	int		negeg;

	negeg = (nbr < 0);
	i = ft_numlen(nbr);
	if (nbr == 0)
		return (ft_strdup("0"));
	str = (char *)malloc(sizeof(char) * (i + 1 + negeg));
	if (!str)
		return (NULL);
	str[i] = 0;
	i--;
	while (nbr)
	{
		str[i--] = '0' + (ft_abs(nbr % 10));
		nbr /= 10;
	}
	if (negeg)
		str[0] = '-';
	return (str);
}
/*int main()
{
	char *ans = ft_itoa(4151329);
}*/