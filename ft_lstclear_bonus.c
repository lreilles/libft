/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsellier <lsellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 03:16:47 by lsellier          #+#    #+#             */
/*   Updated: 2024/10/24 03:26:16 by lsellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (*lst != NULL)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(tmp, del);
	}
}

// int	main(void)
// {
// 	t_list	*tete;
// 	t_list	*deuxieme;
// 	t_list	*troisieme;
// 	t_list	*dernier;

// 	tete = malloc(sizeof(t_list));
// 	deuxieme = malloc(sizeof(t_list));
// 	troisieme = malloc(sizeof(t_list));
// 	dernier = malloc(sizeof(t_list));
// 	tete->content = malloc(strlen("Premier") + 1);
// 	strcpy(tete->content, "Premier");
// 	tete->next = deuxieme;
// 	deuxieme->content = malloc(strlen("Deuxième") + 1);
// 	strcpy(deuxieme->content, "Deuxième");
// 	deuxieme->next = troisieme;
// 	troisieme->content = malloc(strlen("Troisième") + 1);
// 	strcpy(troisieme->content, "Troisième");
// 	troisieme->next = dernier;
// 	dernier->content = malloc(strlen("Dernier") + 1);
// 	strcpy(dernier->content, "Dernier");
// 	dernier->next = NULL;
// 	ft_lstclear(&tete, free);
// 	if (tete == NULL)
// 		printf("La liste a été correctement libérée.\n");
// 	else
// 		printf("La liste n'a pas été correctement libérée.\n");
// 	return (0);
// }
