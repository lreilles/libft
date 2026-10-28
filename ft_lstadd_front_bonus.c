/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsellier <lsellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 06:56:36 by lsellier          #+#    #+#             */
/*   Updated: 2024/10/24 03:30:07 by lsellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}

// t_list	*creer_noeud(int valeur)
// {
// 	t_list	*nouveau_noeud = malloc(sizeof(t_list));

// 	if (!nouveau_noeud)
// 		return (NULL);
// 	nouveau_noeud->content = (void *)(long)valeur;
// 	nouveau_noeud->next = NULL;
// 	return (nouveau_noeud);
// }

// void	afficher_liste(t_list *liste)
// {
// 	while (liste)
// 	{
// 		printf("%d -> ", (int)(long)liste->content);
// 		liste = liste->next;
// 	}
// 	printf("NULL\n");
// }

// int	main(void)
// {
// 	t_list	*liste = NULL;
// 	t_list	*noeud1 = creer_noeud(1);
// 	t_list	*noeud2 = creer_noeud(2);
// 	t_list	*noeud3 = creer_noeud(3);

// 	ft_lstadd_front(&liste, noeud1);
// 	ft_lstadd_front(&liste, noeud2);
// 	ft_lstadd_front(&liste, noeud3);
// 	afficher_liste(liste);
// 	free(noeud1);
// 	free(noeud2);
// 	free(noeud3);
// 	return (0);
// }
