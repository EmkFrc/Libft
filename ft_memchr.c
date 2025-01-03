/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 23:30:53 by efranco           #+#    #+#             */
/*   Updated: 2024/11/08 16:08:56 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	const unsigned char	*memory;
	unsigned char		sc;
	size_t				i;

	memory = (unsigned char *) memoryBlock;
	sc = (unsigned char)searchedChar;
	i = 0;
	while (i < size)
	{
		if (memory[i] == sc)
			return ((unsigned char *)memory + i);
		i++;
	}
	return (NULL);
}
