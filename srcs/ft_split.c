/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:55:07 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/18 06:08:25 by nrobinso         ###   ########.fr       */
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

static size_t ft_nb_words(char const *str, char divider);
size_t	ft_nb_chars_word(const char *s, char split);


char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	next;
	size_t	chars;
	char	**str;

	i = 0;
	next = 0;
	if (!(str = (char **)ft_calloc((ft_nb_words(s, c) + 1), sizeof(char **))))
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		chars = ft_nb_chars_word(&s[i], c);
		if (chars > 0)
		{
			if (!(*(str + next) = (char *)ft_calloc(chars + 1, sizeof(char))))
				return (NULL);	
			ft_memcpy(str[next], &s[i], chars);
			i = i + chars;
			next++;
		}
	}
	str[next] = NULL;
	return (str);

}


static size_t ft_nb_words(char const *str, char split)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{

        if ((str[i] != split) && ((str[i + 1] == split) || str[i + 1] == '\0'))

				count++;
			i++;
	}
	
	return (count);
}

size_t	ft_nb_chars_word( const char *s, char split)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != split)
		i++;
	return (i);
}
