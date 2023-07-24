/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelo-ca <pmelo-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:51:43 by pmelo-ca          #+#    #+#             */
/*   Updated: 2023/07/24 19:01:32 by pmelo-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if ((str[index] >= 'a' && str[index] <= 'z') || (str[index] >= 'A'
				&& str[index <= 'Z']))
			index++;
		else
			return (0);
	}
	return (1);
}
