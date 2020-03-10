/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapalmer <dapalmer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 16:55:17 by dapalmer          #+#    #+#             */
/*   Updated: 2020/03/10 17:02:35 by dapalmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Change header username

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
// #include <stdio.h>

char				*ft_strdup(const char *s1);
char				*ft_strjoin(char *s1, char *s2, int rd);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strchr(const char *s, int c);
size_t				ft_strlen(const char *s);
int					get_next_line(int fd, char **line);

#endif