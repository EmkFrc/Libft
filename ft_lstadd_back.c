/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:52:07 by efranco           #+#    #+#             */
/*   Updated: 2024/11/14 13:01:52 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *new;
	if (!lst || !new)
		return NULL;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(lst);
	last->next = new;
}
