/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:43:04 by efranco           #+#    #+#             */
/*   Updated: 2024/09/26 16:43:04 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char   *str;
    str = (unsigned char *)s;
    while(n-- > 0)
    {
        *str = 0;
        str++;
    }
}