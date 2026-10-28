/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsellier <lsellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 04:04:11 by lsellier          #+#    #+#             */
/*   Updated: 2024/10/24 03:19:53 by lsellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	while (lst)
	{
		tmp = lst;
		lst = (lst)->next;
		f(tmp->content);
	}
}

// void	afficher_contenu(void *contenu)
// {
// 	printf("%s\n", (char *)contenu);
// }

// int	main(void)
// {
// 	t_list	*liste;
// 	t_list	*nouvelle;

// 	liste = NULL;
// 	nouvelle = ft_lstnew("Bonjour");
// 	ft_lstadd_front(&liste, nouvelle);
// 	nouvelle = ft_lstnew("aurevoir");
// 	ft_lstadd_front(&liste, nouvelle);
// 	nouvelle = ft_lstnew("c'est triste");
// 	ft_lstadd_front(&liste, nouvelle);
// 	ft_lstiter(liste, afficher_contenu);
// 	return (0);
// }
