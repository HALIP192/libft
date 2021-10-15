/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:37:27 by ntitan            #+#    #+#             */
/*   Updated: 2021/10/14 17:43:53 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		((char *)s)[n] = 0;
}

/*int main()	
{
	char *s = (char *)malloc(sizeof(char) * 6);
	char *s1 = (char *)malloc(sizeof(char) * 6);

	memset(s, 5, 5);
	memset(s, 5, 5);
	ft_bzero(s, 5);
	bzero(s1, 5);

	printf("my : %s \n", s);
	printf("nemy : %s \n", s1);
	return (0);
}*/
