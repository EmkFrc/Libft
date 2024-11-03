/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:12:01 by efranco           #+#    #+#             */
/*   Updated: 2024/09/26 16:12:01 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha( int character)
{
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
        return(1);
    else
        return(0);
}
