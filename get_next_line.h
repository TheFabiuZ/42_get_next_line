/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: famirant <famirant@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:22:30 by famirant          #+#    #+#             */
/*   Updated: 2022/10/25 10:45:58 by famirant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

// Libraries
# include <unistd.h>
# include <stdlib.h>

// Functions
char	*get_next_line(int fd);
char	*ft_read_line(int fd, char *lline);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(const char *s);
char	*ft_get_line(char *lline);
char	*ft_new_line(char *lline);

#endif
