/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:31:53 by efranco           #+#    #+#             */
/*   Updated: 2024/10/25 18:31:53 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    size_t i;
    size_t j;

    size_t i = 0;
    size_t j = 0;
    str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!str)
        return (0);
    while (s1[i])
    {
        str[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while(s2[i])
    {
        str[j] = s2[i];
        i++;
        j++;
    }
    str[j] = '\0';
    return (str);
}