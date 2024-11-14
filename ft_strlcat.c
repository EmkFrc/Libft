/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:09:52 by efranco           #+#    #+#             */
/*   Updated: 2024/11/07 15:19:59 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	sizedest;
	size_t	sizesrc;

	sizedest = ft_strlen(dst);
	sizesrc = ft_strlen(src);
	if (size == 0)
		return (sizesrc + size);
	i = 0;
	j = sizedest;
	while (src[i] && j < size - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	if (size < sizedest)
		return (size + sizesrc);
	return (sizedest + sizesrc);
}
