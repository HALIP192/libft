/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:15:34 by ntitan            #+#    #+#             */
/*   Updated: 2021/10/14 17:33:59 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}

/*int main()
{
	int i;
	
	i = 0;
	while (i <= 127)
	{
		printf("my: %c) %d\n", i, ft_isprint(i));
		printf("nemy: %c) %d\n", i, isprint(i));
		i++;
	}
	return (0);
}*/
