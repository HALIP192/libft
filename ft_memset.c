/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:08:28 by ntitan            #+#    #+#             */
/*   Updated: 2021/10/16 17:56:30 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
		((unsigned char *)b)[i++] = (unsigned char)c;
	return (b);
}

/*int main()
{
	char *s = (char *)malloc(sizeof(char) * 5 + 1);
	printf("my: %s",ft_memset(s, 49, 5));
	printf("nemy: %s",memset(s, 49, 5));
	return (0);
}*/
