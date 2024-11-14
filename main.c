/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:29:37 by efranco           #+#    #+#             */
/*   Updated: 2024/11/14 13:43:28 by efranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list *lst;

	lst = malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = (t_list *)content;
	lst->next = NULL;

	return (lst);
}

void ft_lstprint(t_list *lst)
{
    while (lst)
    {
        printf("| %d | -> ", *((int *)lst->content));  
        lst = lst->next;
    }
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	 new->next = *lst;

	 *lst = new;
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return NULL;
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = new;
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(lst);
	last->next = new;
}

int main()
{
	int a = 1;
	int b = 2;
	t_list	*element1 = ft_lstnew(&a);
	t_list	*element2 = ft_lstnew(&b);
	t_list	**elementStart = &element2;

	ft_lstadd_back(elementStart, element1);
	ft_lstprint(*elementStart);
	printf("| NULL |\n");	
}
