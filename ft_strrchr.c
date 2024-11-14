/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 23:03:26 by efranco           #+#    #+#             */
/*   Updated: 2024/11/12 17:00:27 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int searchedChar)
{
	int	i;

	i = ft_strlen(str) - 1;
	if ((char)searchedChar == 0)
		return ((char *) str + i + 1);
	while (i >= 0)
	{
		if (str[i] == (char)searchedChar)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}
