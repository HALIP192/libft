/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:27:14 by ntitan            #+#    #+#             */
/*   Updated: 2021/10/14 17:51:16 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c <= '9' && c >= '0');
}

/*int main()
{
	int i;

	i = 40;
	while (i >= 40 && i <= 60)
	{
		printf("my: %c) %d\n", i, ft_isdigit(i));
		printf("nemy: %c) %d\n", i, isdigit(i));
		i++;
	}
	return (0);
}*/
