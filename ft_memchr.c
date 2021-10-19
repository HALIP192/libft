/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:32:56 by ntitan            #+#    #+#             */
/*   Updated: 2021/10/14 17:32:58 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*(ptr) == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return ((void *)0);
}
