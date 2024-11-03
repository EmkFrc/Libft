/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:11:52 by efranco           #+#    #+#             */
/*   Updated: 2024/09/26 16:11:52 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int character)
{
    if (character >= '0' && character <= '9')
        return (1);
    else
        return(0);
}
int main(void)
{
    char character;
    character = 48;

    while(character < 57)
    {
        printf("%d\n", ft_isdigit(character));
        character++;
    }
}