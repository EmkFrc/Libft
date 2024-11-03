/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:22:00 by efranco           #+#    #+#             */
/*   Updated: 2024/10/24 14:22:00 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int ft_strncmp(const char *first, const char *second, size_t length)
{
    size_t i;

    i = 0;

    if (length == 0)
        return (0);
    while (first[i] == second[i] && first[i] != '\0' && i < length)
        i++;
    if (i == length)
        return 0;
    return((unsigned char)first[i] - (unsigned char)second[i]);
}