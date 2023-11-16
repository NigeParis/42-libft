/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:55:07 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/16 18:03:24 by nrobinso         ###   ########.fr       */
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

static char	**ft_alloc_split_mem(char **str, size_t nb_words, size_t nb_chars);


size_t ft_nb_words_to_split(char const *str, char word_end)
{
	size_t i;
	size_t j;
	size_t count;

	i = 0;
	j = 0;
	count = 0;
	if (str[i] == word_end)
		count++;
	while (str[i] != '\0')
	{
		while (str[i + j] != word_end)
		{
			j++;
			if (str[i + j] == '\0')
				break ;
		}
		i = i + j;
		count++;
		j = 0;
		i++;
	}
	return (count);
}






char	**ft_split(char const *s, char c)
{
	char		**str;
	char		*string;
	size_t		len;
	size_t		nb_words;
	size_t		nb_char_in_words;
	size_t		i;
	
	string = (char*)s;
	len = ft_strlen(s);
	str = NULL;
	nb_words = ft_nb_words_to_split(s, c);
	nb_char_in_words = 3;
	i = 0;

	str = ft_alloc_split_mem(str, nb_words, 4);

	printf("\nlength.....'%zu'", len);
	printf("\nnb_words...'%zu'", nb_words);
	printf("\nstring......'%s'", string);
	printf("\nseparateur..'%c'", c);

	return (str);
}



static char	**ft_alloc_split_mem(char **str, size_t nb_words, size_t nb_chars)
{
	size_t		i;
	
	i = 0;
	str = (char **)ft_calloc(nb_words,  sizeof(*str));
	while (i < nb_words)
	{
		str[i] = (char *)ft_calloc(nb_chars,  sizeof(*str));
		if (!(str[i]))
		{
			while (i > 0)
				free(str[i]);
			free(str);
			return (NULL);
		}
		i++;
	}

	str[0][0] = 'k';
	str[0][1] = 'a';
	str[0][2] = '\0';

	str[1][0] = 'M';
	str[1][1] = 'b';
	str[1][2] = '\0';

	str[2][0] = 'x';
	str[2][1] = 'c';
	str[2][2] = '\0';

	return (str);
}

