/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:55:07 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/16 16:53:25 by nrobinso         ###   ########.fr       */
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
	nb_words = 3 + 1;
	nb_char_in_words = 3;
	i = 0;
	

	printf("\nstring = '%s'", string);
	printf("\nlength = '%zu'", len);

	str = (char **)calloc(nb_words,  sizeof(*str));

	while (i < nb_words)
	{
		str[i] = (char *)calloc(nb_char_in_words,  sizeof(*str));
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
	str[0][1] = c;
	str[0][2] = '\0';

	str[1][0] = 'M';
	str[1][1] = c;
	str[1][2] = '\0';

	str[2][0] = 'x';
	str[2][1] = c;
	str[2][2] = '\0';

		
	printf("%c", str[0][1]);

	return (str);
	


}

