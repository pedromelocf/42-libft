/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:03:13 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/08/04 13:35:55 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptrdest;
	const char	*ptrsrc;
	size_t	i;

	ptrdest =dest;
	ptrsrc = src;
	i = 0;
	if (dest <= src)
	{
	while (i < n)
		{
			ptrdest[i] = ptrsrc[i];
			i++;
		}
	}
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			ptrdest[i - 1] = ptrsrc[i - 1];
			i--;
		}
	}
	return (dest);
}
