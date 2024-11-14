/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:00:26 by efranco           #+#    #+#             */
/*   Updated: 2024/11/13 17:28:11 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct	s_list
{
	void	*content;
	struct	s_list *next;
}	t_list;

int		ft_isalnum( int character);
int		ft_isalpha( int character);
int		ft_atoi(const char *theString);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t elementCount, size_t elementSize);
int		ft_isascii(int c);
int		ft_isdigit(int character);
int		ft_isprint(int character);
char	*ft_itoa(int n);
void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size);
int		ft_memcmp(const void *pointer1, const void *pointer2, size_t size);
void	*ft_memcpy(void *destination, const void *source, size_t size);
void	*ft_memmove(void *destination, const void *source, size_t size);
void	*ft_memset(void *pointer, int value, size_t count);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(const char *s, char c);
char	*ft_strchr(const char *str, int searchedChar);
char	*ft_strdup(const char *source);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *theString);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *first, const char *second, size_t length);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *str, int searchedChar);
char	*ft_strtrim(char const *s1, char const *set);
int		ft_tolower(int character);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_toupper(int character);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(void	*content);

#endif
