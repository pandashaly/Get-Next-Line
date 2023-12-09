/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:43:35 by ssottori          #+#    #+#             */
/*   Updated: 2023/12/09 20:20:05 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

char	*get_next_line(int fd)//takes a file desctriptor as an argument
{
	static char	*buff;
	char		*line;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	buff = ft_readfd(fd, buff);
	if (!buff)
		return (NULL);
	line = ft_line(buff);
	buff = ft_afternl(buff);
	return (line);
}
