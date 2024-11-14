/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:56:26 by efranco           #+#    #+#             */
/*   Updated: 2024/11/12 17:00:16 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int searchedChar)
{
	while (*str != '\0')
	{
		if (*str == (char)searchedChar)
			return ((char *)str);
		str++;
	}
	if ((char)searchedChar == '\0')
		return ((char *)str);
	return (NULL);
}
