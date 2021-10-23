/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:28:36 by ntitan            #+#    #+#             */
/*   Updated: 2021/10/23 16:20:10 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	words_alloc(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (s != (void *)0 && *s)
	{
		while (*s == c)
			s++;
		if (!(*s))
			continue ;
		s = ft_strchr(s, c);
		count++;
	}
	return (count);
}

void	*ft_free_4split(char **split, size_t id)
{
	while (id--)
		free(split[id]);
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	size_t	i;
	char	**result;
	char	*iter;

	if (!s)
		return (NULL);
	count = words_alloc(s, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	result[count] = NULL;
	i = 0;
	while (i < count)
	{
		while (*s == c && *s && s != NULL)
			s++;
		iter = ft_strchr(s, c);
		result[i] = ft_substr(s, 0, (size_t)iter - (size_t)s);
		if (!result[i++])
			return ((char **)ft_free_4split(result, i));
		s = iter;
	}
	return (result);
}
