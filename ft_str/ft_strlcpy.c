/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:00:42 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/07/26 20:13:07 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	strlcpy(char dst, const char *restrict src, size_t sz)
{
	size_t	i;

	i = 0;
	if (sz == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while ((i < sz - 1) && (src[i]))
	{
		dst[i] = src[i];
		i++;
	}
	if (i < sz)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
