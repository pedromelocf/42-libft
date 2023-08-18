/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:58:59 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/08/18 00:26:46 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:58:59 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/08/18 00:25:59 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_count_char_c(char const *s, char c, char **splited_array)
{
	size_t arrays_counter;

	arrays_counter = 1;
	while (*s)
	{
		if (*s == c)
			arrays_counter++;
		s++;
	}
	splited_array = (char **)malloc(sizeof(char *) * arrays_counter);
	return (splited_array);
}

char **ft_set_alloc_arrays(char const *s, char c, char **splited_array)
{
	size_t arrays_index;
	size_t string_index;
	size_t s_index;

	arrays_index = 0;
	string_index = 0;
	s_index = 0;
	while (s[s_index])
	{
		if (s[string_index] == c)
		{
			splited_array[arrays_index] = (char*)malloc(sizeof(char) * (string_index + 1));
			splited_array[arrays_index][string_index] = '\0';
			arrays_index++;
			string_index = 0;
		}
		splited_array[arrays_index] = (char*)malloc(sizeof(char) * (string_index + 1));
		splited_array[arrays_index][string_index] = s[string_index];
		string_index++;
		s_index++;
	}
	return (splited_array);
}

char	**ft_split(char const *s, char c)
{
	char **splited_array;

	splited_array = 0;
	printf("Hello\n");
	splited_array = ft_count_char_c(s, c, splited_array);
	printf("Hello\n");
	splited_array = ft_set_alloc_arrays(s, c, splited_array);
	printf("Hello\n");
	return (splited_array);
}

int main (void)
{
	char *string;
	char c;
	char **result;
	int index;

	index = 0;
	string = "Taste";
	c = 'e';
	result = ft_split(string, c);
	printf("Resultado esperado: Teste\n");
	printf("Resultado obtido: %s\n", result[index]);
}

