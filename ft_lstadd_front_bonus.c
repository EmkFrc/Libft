/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:50:05 by efranco           #+#    #+#             */
/*   Updated: 2024/11/13 16:49:47 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
void ft_lstprint(t_list *lst)
{
    while (lst)
    {
        printf("| %d | -> ", *((int *)lst->content));  
        lst = lst->next;
    }
}

int main()
{
	int a = 1;
	int b = 2;
	t_list	*element1 = ft_lstnew(&a);
	t_list	*element2 = ft_lstnew(&b);
	t_list	**elementStart = &element2;

	ft_lstadd_front(elementStart, element1);
	ft_lstprint(*elementStart);
	printf("| NULL |\n");
}*/
