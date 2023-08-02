/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:39:06 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/08/02 11:04:17 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	counter;
	char	*ptr;

	ptr = s;
	counter = 0;
	while (counter < n)
	{
		ptr[counter] = '\0';
		counter++;
	}
	return ;
}
