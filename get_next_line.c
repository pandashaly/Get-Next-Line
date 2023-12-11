/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:43:35 by ssottori          #+#    #+#             */
/*   Updated: 2023/12/11 16:51:18 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*strlen - It counts the number of characters until 
 * the null terminator \0 is encountered.
 * Important when allocating memory to store 
 * concatenated strings in ft_strjoin.*/
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*get_next_line(int fd)
{
	static char	*save;
	char		*line;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	save = ft_readfd(fd, save);
	if (!save)
		return (NULL);
	line = ft_line(save);
	save = ft_afternl(save);
	return (line);
}
