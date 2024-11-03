/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 23:52:37 by efranco           #+#    #+#             */
/*   Updated: 2024/10/18 23:52:37 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int ft_memcmp( const void * pointer1, const void * pointer2, size_t size )
{
    unsigned char *p1;
    unsigned char *p2;
    size_t i;

    p1 = (unsigned char *) pointer1;
    p2 = (unsigned char *) pointer2;
    i = 0;

    while (i < size)
    {
        if (p1[i] != p2[i])
            return (p1[i] - p2[i]);
        i++;
    }
    return (0);
}