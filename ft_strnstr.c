/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 23:49:46 by efranco           #+#    #+#             */
/*   Updated: 2024/10/20 23:49:46 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    i = 0;

    if (!*little)
        return(big);   
    while (big[i] && i < len)
    {
        j = 0;
        while ((i + j) < len && big[i + j] && little[j] && big[i + j] == little[j])
            j++;
        if(little[j] == '\0')
                return ((big + i));
        i++;
    }
    return NULL;
}
