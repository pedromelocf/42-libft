/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:17:09 by pmelo-ca          #+#    #+#             */
/*   Updated: 2024/01/09 20:51:57 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s)
{
	char	*newstring;
	size_t	index1;
	size_t	index2;

	index1 = 0;
	index2 = 0;
	while (s[index1])
		index1++;
	newstring = (char *)malloc(sizeof(char) * index1 + 1);
	if (!newstring)
		return (NULL);
	while (index2 < index1)
	{
		newstring[index2] = s[index2];
		index2++;
	}
	newstring[index2] = '\0';
	return (newstring);
}
