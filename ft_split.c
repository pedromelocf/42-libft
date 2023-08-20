/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:58:59 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/08/20 10:08:15 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_count_substrings(char const *s, char c, char **splited_array)
{
	size_t	arrays_counter;
	size_t	s_index;
	size_t	array_validation;

	s_index = 0;
	array_validation = 0;
	arrays_counter = 1;
	while (s[s_index])
	{
		if (s[s_index] == c)
			s_index++;
		else if (s[s_index] != c)
		{
			if (s[s_index + 1] == c || s[s_index + 1] == '\0')
				arrays_counter++;
			s_index++;
		}
	}
	splited_array = (char **)malloc(sizeof(char *) * arrays_counter);
	return (splited_array);
}

char	**ft_split(char const *s, char c)
{
	char	**splited_array;
	char	*start;
	size_t	index;

	index = 0;
	start = (char *)s;
	splited_array = ft_count_substrings(s, c, splited_array);
	if (s == NULL || splited_array == NULL)
		return (NULL);
	while (*s)
	{
		if (*s == c)
		{
			if (s > start)
				splited_array[index++] = ft_substr(start, 0, (s - start));
			start = (char *)(s + 1);
		}
		s++;
	}
	if (s > start)
		splited_array[index++] = ft_substr(start, 0, (s - start));
	splited_array[index] = NULL;
	return (splited_array);
}