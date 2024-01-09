/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:03:13 by pmelo-ca          #+#    #+#             */
/*   Updated: 2024/01/09 20:51:36 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*ptrdest;
	const char	*ptrsrc;

	ptrdest = dest;
	ptrsrc = src;
	if (!dest && !src)
		return (NULL);
	if (dest <= src)
		while (n--)
			*ptrdest++ = *ptrsrc++;
	if (dest > src)
	{
		ptrdest += n;
		ptrsrc += n;
		while (n--)
			*--ptrdest = *--ptrsrc;
	}
	return (dest);
}
