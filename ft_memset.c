/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:44:14 by efranco           #+#    #+#             */
/*   Updated: 2024/11/07 15:39:14 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned int	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)pointer;
	while (i < count)
	{
		str[i] = (unsigned char)value;
		i++;
	}
	return (pointer);
}
/*
int main()
{
	char str[10];
	int value = 65;
	int size = 10;
	
	memset(str, 0, size);
	ft_memset(str, value, size);
	printf("%s\n", str);
	printf("%s", str);
}*/
