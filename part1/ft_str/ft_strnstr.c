/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:09:21 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/08/11 15:38:01 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little[0])
		return (big);
	while (big[i] && (i < len))
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j < len))
		{
			if (little[j + 1] == '\0')
				return (big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
