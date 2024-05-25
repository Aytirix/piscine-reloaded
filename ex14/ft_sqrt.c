/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmouty <thmouty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:17:51 by thmouty           #+#    #+#             */
/*   Updated: 2024/04/17 17:18:02 by thmouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	float	m;
	float	max;
	float	min;
	int		i;

	max = 46340;
	min = 0;
	i = 0;
	while (i <= 50)
	{
		m = (max + min) / 2;
		if ((int)m * (int)m == nb)
			return ((int)m);
		else if ((int)m * (int)m > nb)
			max = m;
		else
			min = m;
		i++;
	}
	return (0);
}
