/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:55:32 by pmelo-ca          #+#    #+#             */
/*   Updated: 2024/01/09 20:51:35 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		counter;
	char		*ptrdest;
	const char	*ptrsrc;

	counter = 0;
	ptrdest = dest;
	ptrsrc = src;
	if (ptrdest == NULL && ptrsrc == NULL)
		return (NULL);
	while (counter < n)
	{
		ptrdest[counter] = ptrsrc[counter];
		counter++;
	}
	return (dest);
}
