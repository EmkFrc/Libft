/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:20:53 by efranco           #+#    #+#             */
/*   Updated: 2024/11/01 20:20:53 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;
    int size;
    char    *str;

    i = 0;
    size = ft_strlen(s);
    if (!s || !f)
        return;
    while (s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}