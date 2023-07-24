/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:48:31 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/07/24 19:51:42 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 32 && str[index] <= 126)
			index++;
		else
			return (0);
	}
	return (1);
}
