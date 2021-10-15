/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:48:03 by ntitan            #+#    #+#             */
/*   Updated: 2021/10/14 17:34:49 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*int main()
{
	int i;

	i = 48;
	while (i >= 48 && i <= 123)
	{
		printf("my: %c) %d\n", i, ft_isalnum(i));
		printf("nemy: %c) %d\n", i, isalnum(i));
		i++;
	}
	return (0);
}*/
