/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:28:37 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/08/02 16:30:50 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*ptrs;
	size_t				i;

	i = 0;
	ptrs = s;
	while (i < n)
	{
		if (ptrs[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return ((void *)0);
}
