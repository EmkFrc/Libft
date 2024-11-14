/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 00:39:51 by efranco           #+#    #+#             */
/*   Updated: 2024/11/08 16:04:37 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_number(int n)
{
	int	count;

	if (n <= 0)
		count = 1;
	else
		count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*tab;
	int			i;
	long long	nb;

	nb = n;
	i = ft_number(nb);
	tab = malloc(sizeof(char) * (i + 1));
	if (!tab)
		return (NULL);
	tab[i] = '\0';
	if (nb < 0)
	{
		tab[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		tab[0] = '0';
	i--;
	while (nb > 0)
	{
		tab[i] = (nb % 10) + 48;
		nb /= 10;
		i--;
	}
	return (tab);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <limits.h> 

char *ft_itoa(int n);

int main(void)
{
    int test_values[] = {0, 123, -123, 456789, -456789, INT_MIN, INT_MAX};
    int num_tests = sizeof(test_values) / sizeof(test_values[0]);
    
    for (int i = 0; i < num_tests; i++)
    {
        char *result = ft_itoa(test_values[i]);
        if (result)
        {
            printf("ft_itoa(%d) = %s\n", test_values[i], result);
            free(result);
        }
        else
        {
            printf("ft_itoa(%d) = (null)\n", test_values[i]);
        }
    }
    
    return 0;
}
*/
