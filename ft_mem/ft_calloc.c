/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:15:22 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/08/05 13:11:36 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
	char *memmory;
	size_t index;

	index = 0;
	memmory = (void *)malloc(size * nmemb);
	if (memmory == NULL)
		return(0);
	while (index < nmemb * size)
	{
		memmory[index] = '\0';
		index++;
	}
	return(memmory);
}
