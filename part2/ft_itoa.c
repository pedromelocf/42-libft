/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:58:45 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/08/14 19:06:16 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *string;
	long int number;
	size_t alloc_size;
	size_t	index;
	long int number2;

	index = 0;
	alloc_size = 0;
	number = n;
	number2 = n;
	while(number != 0)
	{
		alloc_size++;
		number = number / 10;
	}
	if (number2 <= 0)
		alloc_size++;
	string = (char *)malloc(alloc_size + 1 * sizeof(char));
	if (!(string))
		return (NULL);
	if (number2 < 0)
	{
		number2 *= -1;
		index++;
		string[0] = '-';
	}
	string[alloc_size] = '\0';
	if (number2 == 0)
		string[0] = '0';
	while (alloc_size != index)
	{
		alloc_size--;
		string[alloc_size] = number2 % 10 + '0';
		number2 = number2 / 10;
	}
	return (string)	;
}
