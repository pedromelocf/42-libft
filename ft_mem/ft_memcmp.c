/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:32:07 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/08/02 16:42:35 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*ptrs1;
	const char	*ptrs2;
	int			i;

	ptrs1 = s1;
	ptrs2 = s2;
	i = 0;
	if (!ptrs1[i] || !ptrs1[i])
		return (0);
	while (i < n)
	{
		if (ptrs1[i] != ptrs2[i])
			return ((int)(ptrs1 - ptrs2));
		i++;
	}
	return (0);
}
