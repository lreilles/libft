/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsellier <lsellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 07:13:33 by lsellier          #+#    #+#             */
/*   Updated: 2024/10/24 03:17:40 by lsellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list	*tete;
// 	t_list	*deuxieme;
// 	t_list	*troisieme;
// 	t_list	*dernier;
// 	t_list	*dernier_elem;

// 	tete = malloc(sizeof(t_list));
// 	deuxieme = malloc(sizeof(t_list));
// 	troisieme = malloc(sizeof(t_list));
// 	dernier = malloc(sizeof(t_list));
// 	tete->content = "Premier";
// 	tete->next = deuxieme;
// 	deuxieme->content = "Deuxième";
// 	deuxieme->next = troisieme;
// 	troisieme->content = "Troisième";
// 	troisieme->next = dernier;
// 	dernier->content = "Dernier";
// 	dernier->next = NULL;
// 	dernier_elem = ft_lstlast(tete);
// 	if (dernier_elem)
// 		printf("Contenu du dernier élément "
// 			": %s\n", (char *)dernier_elem->content);
// 	free(tete);
// 	free(deuxieme);
// 	free(troisieme);
// 	free(dernier);
// 	return (0);
// }
