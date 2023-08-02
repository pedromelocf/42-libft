/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:13:46 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/08/02 11:03:44 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while ((s1[i] && s2[i]) && (i < n) && !j)
	{
		j = ((size_t)s1[i] - (size_t)s2[i]);
		i++;
	}
	if ((i < n) && s1[i] != s2[i] && !j)
		j = ((size_t)s1[i] - (size_t)s2[i]);
	return (j);
}
