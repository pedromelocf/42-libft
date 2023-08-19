/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:58:59 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/08/19 19:36:24 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_count_char_c(char const *s, char c, char **splited_array)
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
		else if (s[s_index != c])
		{
			if (s[s_index + 1] == c)
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
	size_t	index;
	size_t	substring_len;
	size_t	test;

	test = 0;
	splited_array = ft_count_char_c(s, c, splited_array);
	index = 0;
	substring_len = ft_strlen(s);
	if (s == NULL || splited_array == NULL)
		return (NULL);
	while (s[index])
	{
		while (s[index] == c && s[index])
			index++;
		if (s[index])
		{
			if (ft_strchr(s, c) != 0)
				substring_len = ft_strlen(s);
			else if (*s != c)
				substring_len = ft_strchr(s, c) - s;
			printf("substring_len : %zu\n", substring_len);
			splited_array[test] = ft_substr(s, 0, substring_len);
			index += substring_len;
		}
	}
	splited_array[test] = NULL;
	return (splited_array);
}
int main (void)
{
	char *string;
	char c;
	char **result;

	string = "     ";
	c = 'e';
	result = ft_split(string, c);
	printf("Resultado esperado: Pedro\n");
	printf("Resultado obtido: %s\n", result[0]);
	// printf("Resultado obtido: %s\n", result[1]);
	// printf("Resultado obtido: %s\n", result[2]);
	// printf("Resultado obtido: %s\n", result[3]);
}
