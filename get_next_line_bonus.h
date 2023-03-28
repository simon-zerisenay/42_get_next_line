/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:15:27 by szerisen          #+#    #+#             */
/*   Updated: 2023/02/07 13:55:34 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H 
# define GET_NEXT_LINE_BONUS_H 
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <limits.h>
# include <stdlib.h>
# include <sys/types.h> 
# include <sys/uio.h>  
# include <unistd.h>  

char	*get_next_line(int fd); 
char	*ft_strjoin(char const *s1, char const *s2);  
char	*ft_strchr(const char *string, int searchedChar);    
    
void	ft_bzero(void *s, size_t n);  
void	*ft_calloc(size_t elementCount, size_t elementSize);

size_t	ft_strlen(const char *theString);
 
#endif
 
