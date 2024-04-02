/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbankhar <mbankhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:09:25 by mbankhar          #+#    #+#             */
/*   Updated: 2024/04/02 16:25:12 by mbankhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	buffer_clean(char *buffer)
{
	int		i;
	int		y;
	char	temp[BUFFER_SIZE + 1];

	y = 0;
	i = 0;
	if (ft_strchr(buffer) != -1)
	{
		while (buffer[i] != '\n')
			i++;
		i++;
		while (buffer[i] != '\0')
			temp[y++] = buffer[i++];
		temp[y] = '\0';
		i = 0;
		while (temp[i])
		{
			buffer[i] = temp[i];
			i++;
		}
		buffer[i] = '\0';
	}
	else
		buffer[0] = '\0';
}

char	*ft_strjoin(char *str, char *buffer)
{
	int		len_str;
	int		len_buffer;
	char	*new_string;

	len_str = ft_strlen((char *)str);
	len_buffer = ft_strlen((char *)buffer);
	new_string = (char *)malloc((len_str + len_buffer + 1) * sizeof(char));
	if (new_string == NULL)
	{
		free(str);
		return (NULL);
	}
	ft_strcpy(new_string, str);
	ft_strcpynl(&new_string[len_str], buffer);
	free(str);
	buffer_clean(buffer);
	return (new_string);
}

char	*ft_strjoinend(char *str, char *buffer)
{
	int		len_str;
	int		len_buffer;
	char	*new_string;

	len_str = ft_strlen((char *)str);
	len_buffer = ft_strlen((char *)buffer);
	new_string = (char *)malloc((len_str + len_buffer + 1) * sizeof(char));
	if (new_string == NULL)
	{
		free(str);
		return (NULL);
	}
	ft_strcpy(new_string, str);
	ft_strcpynl(&new_string[len_str], buffer);
	free(str);
	buffer_clean(buffer);
	return (new_string);
}

char	*get_next_line(int fd)
{
	char		*str;
	static char	buffer[4096][BUFFER_SIZE + 1];

	str = NULL;
	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	str = ft_strjoin(str, buffer[fd]);
	if (str == 0)
		return (NULL);
	return (ft_read(str, buffer[fd], fd, 1));
}

/*int	main(void)
{
	int	fd;

	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
	{
		perror ("open");
		exit(EXIT_FAILURE);
	}
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	close(fd);
	return (0);
}
*/