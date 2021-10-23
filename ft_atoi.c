/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:39:03 by ntitan            #+#    #+#             */
/*   Updated: 2021/10/14 18:33:37 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_digit(char c)
{
    if (c <= '9' || c >= '0')
        return (1);
    return (0);
}

static int	ft_isspace_atoi(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || \
		c == '\r' || c == '\v' || c == '\f')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	minus;
	int	num;
	int	count;

	i = 0;
	minus = 1;
	num = 0;
	count = 0;
	while (ft_isspace_atoi(str[i]))
		i = i + 1;
	if (str[i] == '-')
		minus = -1;
	if (str[i] == '-' || str[i] == '+')
		i = i + 1;
	while (ft_digit(str[i]))
	{
		num = num * 10 + str[i++] - '0';
		count++;
	}
	if (count >= 19 && minus == -1)
		return (0);
	else if (count >= 19)
		return (-1);
	return (num * minus);
}
