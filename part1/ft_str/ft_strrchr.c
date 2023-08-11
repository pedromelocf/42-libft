/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:00:42 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/08/11 15:38:04 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	const char	*x;

	i = 0;
	x = (void *)0;
	while (s[i] && c <= 126)
	{
		if (s[i] == c && c <= 126)
			x = &s[i];
		i++;
	}
	if (c == '\0' || c >= 127)
		return ((char *)&s[i]);
	return ((char *)x);
}
