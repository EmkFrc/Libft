/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:08:54 by efranco           #+#    #+#             */
/*   Updated: 2024/11/07 14:27:27 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	unsigned char	*dest;
	unsigned char	*src;

	dest = (unsigned char *)destination;
	src = (unsigned char *)source;
	if (!src && !dest)
		return (0);
	while (size-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (destination);
}
