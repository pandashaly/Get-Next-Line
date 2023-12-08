/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 21:11:28 by ssottori          #+#    #+#             */
/*   Updated: 2023/12/08 16:52:16 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 1024

# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h> 

char	*get_next_line(int fd);
char	*freebuff(char *buff);
size_t	ft_strlen(char *s);
int	ft_isnewline(char *str);
char	*ft_strjoin(char *s1, char *s2);


char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	ft_strjoin(char *s1, char *s2);

#endif
