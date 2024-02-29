/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eazard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 08:53:02 by eazard            #+#    #+#             */
/*   Updated: 2024/02/18 10:10:09 by eazard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puterror(void)
{
	write(2, "error\n", 6);
}

void	ft_print_tab(char **tab, int dim)
{
	int	i;
	int	j;

	i = 0;
	while (i < dim)
	{
		j = 0;
		while (j < dim)
		{
			ft_putchar(tab[i][j]);
			if (j != dim - 1)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}	
}
