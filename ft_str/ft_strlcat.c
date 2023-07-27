/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:06:05 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/07/27 14:17:02 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_lenght;
	size_t	dst_lenght;
	size_t	i;

	src_lenght = 0;
	dst_lenght = 0;
	i = 0;
	while (src[dst_lenght])
		dst_lenght++;
	while (src[src_lenght])
		src_lenght++;
	while ((src[i]) && (dst_lenght + 1) < (size - 1))
	{
		dst[dst_lenght + i - 1] = src[i];
		i++;
	}
	dst[dst_lenght + 1] = '\0';
	if (size < dst)
		return (src + size);
	return (dst_lenght + src_lenght);
}
