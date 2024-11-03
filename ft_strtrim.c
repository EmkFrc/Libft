/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:31:08 by efranco           #+#    #+#             */
/*   Updated: 2024/10/29 14:31:08 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    int     start;
    int     end;
    int     size;

    start = 0;
    end = ft_strlen(s1) - 1;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    while(end > start && ft_strchr(set, set[end]))
        end--;
    size = end - start + 1;
    str = malloc (sizeof(char) * size);
    if(!str)
        return NULL;
    str = ft_substr(s1, start, end);
    str[size] = '\0';
    return (str);  
}