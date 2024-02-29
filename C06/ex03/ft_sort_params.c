/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:10:17 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/19 13:26:07 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i]) && (s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_check_swap(char **av, int i, int j)
{
	char	*temp;

	if (ft_strcmp(av[i], av[j]) > 0)
	{
		temp = av[i];
		av[i] = av[j];
		av[j] = temp;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac < 2)
		return (0);
	i = 1;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j < ac)
		{
			ft_check_swap(av, i, j);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		i++;
	}
	return (0);
}
