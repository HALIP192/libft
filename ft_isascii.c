/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:09:11 by ntitan            #+#    #+#             */
/*   Updated: 2021/10/14 17:36:32 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int main()
{
	int i;

	i = 0;
	while (i <= 127)
	{
		printf("my: %c) %d\n", i, ft_isascii(i));
		printf("nemy: %c) %d\n", i, isascii(i));
		i++;
	}
	return (0);
}*/
