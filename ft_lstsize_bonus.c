/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsellier <lsellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 02:59:31 by lsellier          #+#    #+#             */
/*   Updated: 2024/10/24 03:10:24 by lsellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	if (!lst)
		return (0);
	else
		return (1 + ft_lstsize(lst->next));
}

// int	main(void)
// {
// 	t_list	*lst = NULL;

// 	lst = ft_lstnew("1");
// 	lst->next = ft_lstnew("2");
// 	lst->next->next = ft_lstnew("3");
// 	printf("%d\n", ft_lstsize(lst));
// 	return (0);
// }
