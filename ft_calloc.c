/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:24:18 by efranco           #+#    #+#             */
/*   Updated: 2024/11/08 15:34:25 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*tab;
	size_t	size;

	if (elementSize > 0 && (size_t) - 1 / elementSize < elementCount)
		return (0);
	size = elementCount * elementSize;
	tab = malloc(size);
	if (!tab)
		return (NULL);
	ft_memset(tab, 0, size);
	return (tab);
}
