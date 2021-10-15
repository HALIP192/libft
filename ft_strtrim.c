/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:09:05 by ntitan            #+#    #+#             */
/*   Updated: 2021/10/14 20:46:27 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	skip_nach(char const **s1, char const *set)
{
	while (**s1 && ft_strchr(set, **s1) != (void *)0)
		(*s1)++;
}

static	size_t	skip_konec(char const *s1, char const *set, size_t i)
{
	while (i > 0 && ft_strrchr(set, s1[i - 1]) != (void *)0)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	skip_nach(&s1, set);
	end = ft_strlen(s1);
	if (end)
		end = skip_konec(s1, set, end);
	result = (char *)malloc(sizeof(char) * (end + 1));
	if (result == (char *)0)
		return (result);
	ft_strlcpy(result, s1, end + 1);
	return (result);
}
