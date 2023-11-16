/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <nrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:55:07 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/16 14:04:32 by nrobinso         ###   ########.fr       */
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


