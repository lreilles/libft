/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsellier <lsellier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 23:13:17 by lsellier          #+#    #+#             */
/*   Updated: 2024/10/24 01:03:34 by lsellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*dst2;
	const char	*src2;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst2 = dst;
	src2 = src;
	if (dst2 < src2)
	{
		while (n-- > 0)
			*dst2++ = *src2++;
	}
	else
	{
		dst2 += n - 1;
		src2 += n - 1;
		while (n-- > 0)
			*dst2-- = *src2--;
	}
	return (dst);
}

// int	main(void)
// {
// 	char	dest1[50] = "Bonjour, le monde!";
// 	char	src1[50] = "Au revoir, le monde!";
// 	char	dest2[50] = "Régions qui se chevauchent";

// 	ft_memmove(dest1, src1, 15);
// 	printf("Résultat 1 : %s\n", dest1);
// 	ft_memmove(dest2 + 5, dest2, 10);
// 	printf("Résultat 2 : %s\n", dest2);
// 	return (0);
// }
