/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:29:54 by ntitan            #+#    #+#             */
/*   Updated: 2021/10/16 18:01:11 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		arr[10];
	size_t		len;
	long long	n_long;

	n_long = n;
	if (n_long < 0)
	{
		write(fd, "-", 1);
		n_long *= -1;
	}
	else if (n_long == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	len = 0;
	while (n_long)
	{
		arr[10 - 1 - (len++)] = '0' + n_long % 10;
		n_long /= 10;
	}
	write(fd, arr + 10 - len, len);
}
