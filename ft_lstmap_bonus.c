/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsellier <lsellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 04:08:25 by lsellier          #+#    #+#             */
/*   Updated: 2024/10/24 03:14:57 by lsellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*content;
	void	*tmp;

	lst2 = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		if (!tmp)
		{
			ft_lstclear(&lst2, del);
			return (NULL);
		}
		content = ft_lstnew(tmp);
		if (!content)
		{
			del(tmp);
			ft_lstclear(&lst2, del);
			return (NULL);
		}
		ft_lstadd_back(&lst2, content);
		lst = lst->next;
	}
	return (lst2);
}

// void	*double_value(void *content)
// {
// 	int	*new_value = malloc(sizeof(int));

// 	if (!new_value)
// 		return (NULL);
// 	*new_value = (*(int *)content) * 2;
// 	return (new_value);
// }

// void	delete_content(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*list = ft_lstnew(malloc(sizeof(int)));
// 	*(int *)list->content = 1;
// 	list->next = ft_lstnew(malloc(sizeof(int)));
// 	*(int *)list->next->content = 2;
// 	list->next->next = ft_lstnew(malloc(sizeof(int)));
// 	*(int *)list->next->next->content = 3;
// 	t_list	*new_list = ft_lstmap(list, double_value, delete_content);
// 	t_list	*current = new_list;
// 	while (current)
// 	{
// 		printf("%d\n", *(int *)current->content);
// 		current = current->next;
// 	}
// 	ft_lstclear(&list, delete_content);
// 	ft_lstclear(&new_list, delete_content);
// 	return (0);
// }
