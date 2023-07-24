/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:06:05 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/07/24 20:10:24 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_lenght;
	unsigned int	dest_lenght;
	unsigned int	i;

	src_lenght = 0;
	dest_lenght = 0;
	i = 0;
	while (src[dest_lenght])
		dest_lenght++;
	while (src[src_lenght])
		src_lenght++;
	while (src[i] && dest_lenght + 1 < size)
	{
		dest[dest_lenght + i - 1] = src[i];
		i++;
	}
	dest[dest_lenght + 1] = '\0';
	if (size < dest)
		return (src + size);
	else
		return (dest_lenght + src_lenght);
}
