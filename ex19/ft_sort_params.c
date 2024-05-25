/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmouty <thmouty@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:50:18 by thmouty           #+#    #+#             */
/*   Updated: 2024/04/18 12:47:21 by thmouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (str != NULL && *str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int ac, char **av)
{
	int	i;
	int	res;

	i = 1;
	while (i < ac - 1)
	{
		res = ft_strcmp(av[i], av[i + 1]);
		if (res > 0)
		{
			ft_swap(av + i, av + i + 1);
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i <= ac)
	{
		ft_putstr(av[i]);
		if (i < ac)
			ft_putchar('\n');
		i++;
	}
	return (0);
}
