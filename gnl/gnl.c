
char	*get_next_line(int fd)
{
	static char 	*backup;
	char		*my_line;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	backup = read_line(backup, fd);
	if(!backup)
		return (0);
	my_line = cut(backup);
	backup = remaing(backup);
	return (my_line);
}

static char	*read_line(char *backup, int fd)
{
	int	count;
	char	*buffer;
	
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
	line = malloc(sizeog(char) * i + 2);
	if (!line)
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
	size_t	count;
	char	*rest;
	
	i = 0;
	while (backup[i] && backup[i] !='\n')
		i++;
	if (!backup)
	{
		free(backup)
		return (NULL);
	}
	if (backup[i] == '\n')
		i++;
	rest = malloc(size(char) * ft_strlen(backup) - i + 1);
	if (!rest)
		return (NULL);
	count = 0;
	while (backup[i])
		rest[count++] = backup[i++];
	rest[count] = '\0';
	free(backup);
	return (rest);
}
