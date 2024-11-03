/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:02:07 by efranco           #+#    #+#             */
/*   Updated: 2024/09/26 22:02:07 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi( const char * theString )
{
    int i;
    int res;
    int sign;

    i = 0;
    res = 0;
    sign = 1;

    while ((theString[i] >= 9 && theString[i] <= 13) || (theString[i] == 32))
        i++;
    if (theString[i] == '-' || theString[i] == '+')
    {
        if (theString[i] == '-')
            sign *= -1;
        i++;
    }
    while (theString[i] >= '0' && theString[i] <= '9' && theString[i])
    {
        res = res * 10 + (theString[i] - 48);
        i++;
    }
    return (res * sign);
}