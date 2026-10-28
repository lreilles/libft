/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsellier <lsellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 00:09:00 by lsellier          #+#    #+#             */
/*   Updated: 2024/10/23 07:59:00 by lsellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;

	p = (char *)s;
	while (n > 0)
	{
		if (*p == (char)c)
			return ((void *)p);
		p++;
		n--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "Nouvelle technique : on passe pour des cons,"
// 	" les autres se marrent, et on frappe. C’est nouveau. ";
// 	char	*result;

// 	result = ft_memchr(str, 'm', strlen(str));
// 	if (result != NULL)
// 		printf("%c\n", *result);
// 	else
// 		printf("Caractère non trouvé.\n");
// 	return (0);
// }
