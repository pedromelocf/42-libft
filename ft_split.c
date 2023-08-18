/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:58:59 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/08/18 14:44:56 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_count_char_c(char const *s, char c, char **splited_array)
{
	size_t	arrays_counter;
	size_t	s_index;

	s_index = 0;
	arrays_counter = 1;
	while (s[s_index])
	{
		if (s[s_index] == c)
			arrays_counter++;
		s_index++;
	}
	splited_array = (char **)malloc(sizeof(char *) * arrays_counter);
	return (splited_array);
}

char	**ft_alloc_arrays(char const *s, char c, char **splited_array)
{
	size_t	arrays_index;
	size_t	string_index;
	size_t	s_index;

	arrays_index = 0;
	string_index = 0;
	s_index = 0;
	while (s[s_index])
	{
		if (s[s_index] == c)
		{
			splited_array[arrays_index] = (char *)malloc(sizeof(char)
					* string_index + 1);
			arrays_index++;
			string_index = 0;
		}
		else
			string_index++;
		s_index++;
	}
	splited_array[arrays_index] = (char *)malloc(sizeof(char) * string_index
			+ 1);
	return (splited_array);
}

char	**ft_set_arrays(char const *s, char c, char **splited_array)
{
	size_t	arrays_index;
	size_t	string_index;
	size_t	s_index;

	arrays_index = 0;
	string_index = 0;
	s_index = 0;
	while (s[s_index])
	{
		if (s[s_index] == c)
		{
			splited_array[arrays_index][string_index] = '\0';
			arrays_index++;
			string_index = 0;
		}
		else
		{
			splited_array[arrays_index][string_index] = s[s_index];
			string_index++;
		}
		s_index++;
	}
	splited_array[arrays_index][string_index] = '\0';
	return (splited_array);
}

char	**ft_split(char const *s, char c)
{
	char	**splited_array;

	splited_array = ft_count_char_c(s, c, splited_array);
	if (!(ft_alloc_arrays(s, c, splited_array)))
		return (NULL);
	splited_array = ft_alloc_arrays(s, c, splited_array);
	splited_array = ft_set_arrays(s, c, splited_array);
	return (splited_array);
}
