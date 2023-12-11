/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:11:28 by ssottori          #+#    #+#             */
/*   Updated: 2023/12/11 16:56:21 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h> 

char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
int		ft_isnewline(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_line(char *buff);
char	*ft_readfd(int fd, char *save);
char	*ft_afternl(char *str);

#endif
