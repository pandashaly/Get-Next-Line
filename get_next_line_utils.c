/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssottori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:21:07 by ssottori          #+#    #+#             */
/*   Updated: 2023/12/08 16:00:27 by ssottori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*freebuff(char *buff)
{
	if (buff)
		free(buff);
	return (NULL);
}

/*strlen - It counts the number of characters until 
 * the null terminator \0 is encountered.
 * I,portant when allocating memory to store 
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
/*isnewline - Returns 1 if a NL is found and 0 if a NL is not fine.
 * Used in the loop condition of ft_read to know when 
 * to stop reading from the file descriptor 
 * (when a newline is encountered)*/

int	ft_isnewline(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		return (1);
	i++;
	return (0);
}
/*strjoin - Used in ft_read to combine the content read from the fd (s2)
 * with the existing content(s1). 
 * It dynamically allocates memory for the result.*/
char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_str;
	size_t	i;
	size_t	j;
	size_t	len1;
	size_t	len2;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new_str = (char *)malloc(len1 + len2 + 1);
	if (!new_str)
		return (NULL);
	while (i < len1)
		new_str[i] = s1[i++];
	j = 0;
	while (j < len2)
		new_str[i + j] = s2[j++];
	new_str[i + j] = '\0';
	return (new_str);
}


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	size;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s + start, len + 1);
	return (result);
}
