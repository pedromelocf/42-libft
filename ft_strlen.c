/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:53:18 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/07/24 19:59:24 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(char *str)
{
	char	*string;
	int		counter;

	counter = 0;
	string = str;
	while (*string)
	{
		string++;
		counter++;
	}
	return (counter);
}
