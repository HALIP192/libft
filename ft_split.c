/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:28:36 by ntitan            #+#    #+#             */
/*   Updated: 2021/10/14 20:53:20 by ntitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct kostil
{
	size_t	j;
	size_t	i;
}	t_kostil;

char	**words_alloc(char const *s, char c)
{
	size_t	all_w;
	size_t	i;
	char	**splited;

	all_w = 0;
	i = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			all_w++;
			while (s[i] == c)
				i++;
		}
		i++;
	}
	splited = (char **)malloc(sizeof(char *) * (all_w + 2));
	if (!splited)
		return (NULL);
	return (splited);
}

void	*ft_free_4split(char **split, size_t id)
{
	size_t	i;

	i = 0;
	while (i < id)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char	**nechvatka_strik(t_kostil i, char **split, \
						size_t words_count, char const *s)
{
	split[words_count] = (char *)malloc(sizeof(char) * (i.j + 1));
	if (!split[words_count])
		return (NULL);
	split[words_count] = ft_substr(s, i.i, i.j);
	if (!split[words_count])
		return (ft_free_4split(split, words_count));
	return (split);
}

char	**chars_alloc(char **split, char const *s, char c)
{
	size_t		words_count;
	t_kostil	i;

	words_count = 0;
	i.i = 0;
	i.j = 0;
	while (s[i.i] == c && s[i.i])
		i.i++;
	while (s[i.i])
	{
		if (s[i.i + i.j] == c || !s[i.i + i.j])
		{
			if (!nechvatka_strik(i, split, words_count, s))
				return (NULL);
			i.i += i.j;
			i.j = 0;
			words_count++;
			while (s[i.i] == c && s[i.i])
				i.i++;
		}
		i.j++;
	}
	split[words_count] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = words_alloc(s, c);
	if (!split)
		return (NULL);
	if (!chars_alloc(split, s, c))
		return (NULL);
	return (split);
}
