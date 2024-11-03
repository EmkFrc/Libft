/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 23:03:26 by efranco           #+#    #+#             */
/*   Updated: 2024/10/10 23:03:26 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr( const char *str, int searchedChar)
{
    int i;
    
    i = ft_strlen(str) - 1;
    while(i >= 0)
    {
        if(str[i] == searchedChar)
            return(str + i);
        i--;
    }
    return ((void *)0);
}