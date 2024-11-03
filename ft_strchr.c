/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:56:26 by efranco           #+#    #+#             */
/*   Updated: 2024/10/10 22:56:26 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char* ft_strchr(const char *str, int searchedChar )
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] == searchedChar)
            return (str + i);
        i++;
    }
    return ((void *)0);
}