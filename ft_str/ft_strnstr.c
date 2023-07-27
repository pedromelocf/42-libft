/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:09:21 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/07/27 14:13:40 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return (big);
	while (big[i] && (i < len))
	{
		while (big[i] == little[j] && (i < len))
		{
			if (little[j + 1] == '\0')
				return (*big[i - j]);
			j++;
			i++;
		}
		i++;
	}
	return ((void *)0);
}
