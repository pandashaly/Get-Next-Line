/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:43:35 by ssottori          #+#    #+#             */
/*   Updated: 2023/12/08 20:16:56 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

char	*get_next_line(int fd) //takes a file desctriptor as an argument
							   //returns a [pointer to ta char * representing the ne
{
	static char	*buffer[BUFFER_SIZE];
	char	*line;

	line = 0;
	if (BUFFER_SIZE <= 0 || fd <= 0 || fd >= FOPEN_MAX)
		return (NULL);
	while (1)
	
