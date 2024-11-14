/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <rubisingame@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:57:55 by efranco           #+#    #+#             */
/*   Updated: 2024/11/13 17:32:01 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while(lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

int main()
{
	t_list *tab;
	int	a = 1;
	tab = ft_lstnew(a);
	printf("size : %d\n", ft_lstsize(tab));
}
