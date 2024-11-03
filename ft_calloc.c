/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:24:18 by efranco           #+#    #+#             */
/*   Updated: 2024/10/21 00:24:18 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void *ft_calloc( size_t elementCount, size_t elementSize )
{
    void *tab;
    size_t Size;
    
    Size = elementCount * elementSize;
    tab = malloc(Size);
    if (!tab)
        return NULL;
    ft_memset(tab, 0, Size)
    return(tab);
}