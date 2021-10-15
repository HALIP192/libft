/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:27:25 by ntitan            #+#    #+#             */
/*   Updated: 2021/10/14 17:19:22 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*int main(int argc, char **argv)
{
	if (argc)
	{
		printf("my: %lu\n", ft_strlen(argv[1]));
		printf("nemy: %lu\n", strlen(argv[1]));
	}
	return (0);
}*/
