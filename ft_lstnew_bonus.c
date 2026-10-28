/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsellier <lsellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 06:54:57 by lsellier          #+#    #+#             */
/*   Updated: 2024/10/24 03:12:37 by lsellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int	main(void)
// {
// 	char	*str = "Bonjour, monde !";
// 	t_list	*nouveau_noeud = ft_lstnew(str);

// 	if (nouveau_noeud == NULL)
// 	{
// 		printf("Échec de la création du noeud.\n");
// 		return (1);
// 	}
// 	printf("Contenu du noeud : %s\n", (char *)nouveau_noeud->content);
// 	free(nouveau_noeud);
// 	return (0);
// }
