/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbankhar <mbankhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:09:36 by mbankhar          #+#    #+#             */
/*   Updated: 2024/04/01 15:11:32 by mbankhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

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
