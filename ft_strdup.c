/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 01:40:02 by efranco           #+#    #+#             */
/*   Updated: 2024/10/24 01:40:02 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char *ft_strdup(const char *source)
{
    char *array;
    int i;
    size_t size;

    size = ft_strlen(source);
    i = 0;
    array = malloc(sizeof(char) * (size + 1));
    if (!array)
        return NULL;
    while (source[i])
    {
            array[i] = source[i];
            i++;
    }
    array[i] = '\0';
    return (array);
}