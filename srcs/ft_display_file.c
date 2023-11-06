/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrobinso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 08:44:13 by nrobinso          #+#    #+#             */
/*   Updated: 2023/11/04 12:51:50 by nrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>
#include "../includes/libft.h"

void	ft_display_file(char *str)
{
	int		file;
	char	buf[1];

	file = open(str, O_RDONLY);
	if (file == -1)
	{
		write(2, "Cannot read file.", 17);
		write(1, "\n", 1);
		return ;
	}
	while (read(file, buf, 1))
		write(1, buf, 1);
}
