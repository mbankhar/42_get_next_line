/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbankhar <mbankhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:25:56 by mbankhar          #+#    #+#             */
/*   Updated: 2024/03/27 14:41:42 by mbankhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 20
# endif

int		ft_strchr(char *s);
void	ft_strcpynl(char *s1, char *s2);
void	ft_strcpy(char *dest, char *src);
int		ft_strlen(char *c);
void	buffer_clean(char *buffer);
char	*ft_strjoin(char *str, char *buffer);
char	*ft_strjoinend(char *str, char *buffer);
char	*get_next_line(int fd);
int		ft_error_handl(int chars_read, char *str);
char	*ft_read(char *str, char *buffer, int fd, int chars_read);

#endif
