/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:44:14 by efranco           #+#    #+#             */
/*   Updated: 2024/09/26 16:44:14 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void *ft_memset( void *pointer, int value, size_t count )
{
    unsigned int i;
    i = 0;
    
    unsigned int    *str;
    str =  (unsigned char *)pointer;
    while(i <= count - 1)
    {
        str[i] = value;
        i++;
    }
    return (str);
}