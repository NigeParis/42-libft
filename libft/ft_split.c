/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:55:07 by nrobinso          #+#    #+#             */
/*   Updated: 2024/03/29 15:37:27 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nb_words(char const *str, char sep);
static size_t	ft_nb_chars(const char *s, char sep);
static char		*ft_alloc_free(char **str, size_t nb, size_t next);
static char		**ft_spliter(char const *s, char c, size_t next, size_t i);

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	next;

	next = 0;
	i = 0;
	if (!s)
		return (NULL);
	str = ft_spliter(s, c, next, i);
	return (str);
}

char	**ft_spliter(char const *s, char c, size_t next, size_t i)
{
	char	**str;

	str = (char **) ft_calloc((ft_nb_words(s, c) + 1), sizeof(char **));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if ((ft_nb_chars(&s[i], c)) > 0)
		{
			str[next] = ft_alloc_free(str, ((ft_nb_chars(&s[i], c))), next);
			if (!str[next])
				return (ft_free_double_tab(str), NULL);
			ft_memcpy(str[next], &s[i], (ft_nb_chars(&s[i], c)));
			i = i + (ft_nb_chars(&s[i], c));
			next++;
		}
	}
	str[next] = NULL;
	return (str);
}

static size_t	ft_nb_words(char const *str, char sep)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((str[i] != sep) && ((str[i + 1] == sep) || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static size_t	ft_nb_chars( const char *s, char sep)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != sep)
		i++;
	return (i);
}

static char	*ft_alloc_free(char **str, size_t nb, size_t next)
{
	char		**word;
	size_t		i;

	i = 0;
	word = str;
	word[next] = ft_calloc((nb + 1), sizeof(char));
	if (!word[next])
	{
		while (i < next + 1)
		{
			free(word[i]);
			i++;
		}
		return (NULL);
	}
	return (word[next]);
}
