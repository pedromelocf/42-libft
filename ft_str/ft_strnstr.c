/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:09:21 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/07/26 10:22:06 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] && (i < len))
	{
		while (haystack[i] == needle[j] && (i < len))
		{
			if (needle[j + 1] == '\0')
				return (*haystack[i - j]);
			j++;
			i++;
		}
		i++;
	}
	return (void *)0;
}
