/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfellipe <yfellipe@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:23:24 by yfellipe          #+#    #+#             */
/*   Updated: 2023/11/09 11:23:28 by yfellipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_line(char *backup, int fd)
{
	char	*buffer;
	int		count;

	count = 1;
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (count > 0 && !ft_strchr(backup, '\n'))
	{
		count = read(fd, buffer, BUFFER_SIZE);
		if (count < 0)
		{
			free(buffer);
			return (NULL);
		}
		buffer[count] = '\0';
		backup = ft_strjoin(backup, buffer);
	}
	free(buffer);
	return (backup);
}

static char	*cut(char *backup)
{
	size_t	i;
	char	*line;

	i = 0;
	if (!*backup)
		return (NULL);
	while (backup[i] && backup[i] != '\n')
		i++;
	line = malloc(sizeof(char) * i + 2);
	if (!(line))
		return (NULL);
	i = 0;
	while (backup[i] && backup[i] != '\n')
	{
		line[i] = backup[i];
		i++;
	}
	if (backup[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

static char	*remaining(char *backup)
{
	size_t	i;
	char	*rest;
	size_t	count;

	i = 0;
	while (backup[i] && backup[i] != '\n')
		i++;
	if (!(backup[i]))
	{
		free(backup);
		return (NULL);
	}
	if (backup[i] == '\n')
		i++;
	rest = malloc(sizeof(char) * ft_strlen(backup) - i + 1);
	if (!(rest))
		return (NULL);
	count = 0;
	while (backup[i])
		rest[count++] = backup[i++];
	rest[count] = '\0';
	free(backup);
	return (rest);
}

char	*get_next_line(int fd)
{
	static char	*backup;
	char		*my_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	backup = read_line(backup, fd);
	if (!(backup))
		return (NULL);
	my_line = cut(backup);
	backup = remaining(backup);
	return (my_line);
}
