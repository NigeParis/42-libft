/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:55:07 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/17 18:02:04 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
* ft_split - char **ft_split(char const *s, char c);
*
* Description
* Allocates (with malloc(3)) and returns an array of strings obtained by 
* splitting ’s’ using the character ’c’ as a delimiter. The array must end 
* with a NULL pointer.
*
* Parameters
*              s: The string to be split.
*              c: The delimiter character.
*
* Return value : The array of new strings resulting from the split.
*                NULL if the allocation fails.
* 
* External functs : malloc, free.
**/

#include "libft.h"

static size_t ft_nb_words_to_split(char const *str, char word_end);
size_t	ft_nb_chars_word(const char *s, char word_end);



char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	next;
	size_t	nb_chars;
	char	**str;

	i = 0;
	next = 0;
	if (!(str = ft_calloc((ft_nb_words_to_split(s, c)), sizeof(char *))))
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		nb_chars = ft_nb_chars_word(&s[i], c);
		if (nb_chars > 0)
		{
			if (!(*(str + next) = ft_calloc(nb_chars + 1, sizeof(char))))
			if (!str)
				return (0);	
			ft_strlcpy(str[next], &s[i], nb_chars + 1);
			next++;
			i = i + nb_chars;
		}
	}
	str[next] = 0;
	return (str);

}


static size_t ft_nb_words_to_split(char const *str, char word_end)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
			if ((str[i] == word_end) && ((str[i - 1] != word_end) || i == 0)) 
				count++;
			i++;
	}
	
	return (count);
}

size_t	ft_nb_chars_word( const char *s, char word_end)
{
	size_t	i;
	char *str;

	str = (char *)s;
	i = 0;
	while (s[i] && s[i] != word_end)
		i++;
	return (i);
}


