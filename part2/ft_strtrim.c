/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:02:17 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/08/12 22:18:39 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char*	trimmed_string;
	size_t		s1_lenght;
	size_t		set_lenght;
	size_t		index;

	s1_lenght = strlen(s1);
	set_lenght = 0;
	index = 0;
	while (s1[index] && strchr(set, s1[index]) != NULL)
	{
		set_lenght++;
		index++;
	}
	while (s1[s1_lenght] && strrchr(set, s1[s1_lenght]) != NULL)
	{
		set_lenght++;
		s1_lenght--;
	}
	trimmed_string = (char *)malloc(sizeof (char) * (ft_strlen(s1) - s1_lenght + index + 1));
	ft_strlcpy(trimmed_string, s1, s1_lenght);
	return (trimmed_string);
}
