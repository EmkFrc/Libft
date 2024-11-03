/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:07:36 by efranco           #+#    #+#             */
/*   Updated: 2024/09/27 13:07:36 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void * ft_memmove( void * destination, const void * source, size_t size )
{
    unsigned char   *dest;
    unsigned const char   *src;
    unsigned int    i;
    
    dest = (unsigned char *)destination;
    src = (const unsigned char *)source;
    i = 0;

    if (!src && !dest)
        return (0);
    if (dest > src && dest < src + size)
    {
        while (size > 0)
        {
            size--;
            dest[size] = src[size];
        }
    }
    else 
    {
        while (i < size)
        {
            dest[i] = src[i];
            i++;
        }
    }
    return (destination);
}