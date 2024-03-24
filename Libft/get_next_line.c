/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:47:38 by jjaroens          #+#    #+#             */
/*   Updated: 2024/03/24 11:34:25 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*update_buffer(char *buffer)
{
	char	*update;
	char	*ptr;
	char	*tmp;

	ptr = ft_strchr(buffer, '\n');
	if (ptr == NULL)
		return (NULL);
	if (*ptr == '\n' && *(ptr + 1) == '\0')
	{
		free(buffer);
		return (NULL);
	}
	ptr++;
	update = ft_calloc((ft_strlen(ptr) + 1), sizeof(char));
	if (update == NULL)
		return (NULL);
	tmp = update;
	while (*ptr)
		*(update++) = *(ptr++);
	free(buffer);
	return (tmp);
}

char	*ft_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (buffer == NULL)
		return (NULL);
	if (ft_strchr(buffer, '\n') != NULL)
	{
		while (buffer[i] && buffer[i] != '\n')
			i++;
		line = ft_calloc((i + 2), sizeof(char));
		if (line == NULL)
			return (NULL);
		i = -1;
		while (buffer[++i] != '\n')
			line[i] = buffer[i];
		line[i] = '\n';
	}
	else
		line = buffer;
	return (line);
}

char	*ft_join(char *tmp, char *str)
{
	char	*ptr;

	ptr = ft_strjoin(tmp, str);
	free(tmp);
	return (ptr);
}

char	*read_buffer(int fd, char *buffer, char *str, int *byte_read)
{
	while (1)
	{
		*byte_read = read(fd, str, BUFFER_SIZE);
		if (*byte_read == 0)
			break ;
		if (*byte_read < 0)
		{
			if (buffer)
				free(buffer);
			return (NULL);
		}
		str[*byte_read] = '\0';
		if (buffer == NULL)
		{
			buffer = ft_calloc(1, sizeof(char));
			if (buffer == NULL)
				return (NULL);
		}
		buffer = ft_join(buffer, str);
		if (buffer == NULL)
			return (NULL);
		if (ft_strchr(buffer, '\n') != NULL)
			break ;
	}
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*str;
	char		*line;
	int			byte_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (ft_strchr(buffer, '\n') == NULL)
	{
		str = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
		if (str == NULL)
			return (NULL);
		buffer = read_buffer(fd, buffer, str, &byte_read);
		free(str);
		if (buffer == NULL)
			return (NULL);
	}
	line = ft_line(buffer);
	buffer = update_buffer(buffer);
	return (line);
}
// #include <fcntl.h>
// #include <stdio.h>
// int main (void)
// {
//     char *line;
//     int fd = open("test.txt", O_RDONLY);
//     while (1)
//     {
//         line = get_next_line(fd);
//         if (line == NULL)
//         {
//             break ;
//         }
//         printf("%s", line);
//         free(line);
//     }
//     return (0);
// }