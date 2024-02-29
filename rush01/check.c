/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eazard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:11:34 by eazard            #+#    #+#             */
/*   Updated: 2024/02/18 18:37:57 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_box_count(char **tab, int row, int column
		, int row_index, int column_index, int dim)
{
	int		i;
	char	min;
	int		box_count;

	i = 0;
	min = '0';
	box_count = 0;
	while (i < dim)
	{
		if (tab[row][column] > min)
		{
			min = tab[row][column];
			box_count += 1;
		}
		row += row_index;
		column += column_index;
		i++;
	}
	return (box_count);
}

int	ft_solution_check(char **tab, char *setting, int dim)
{
	int	i;

	i = 0;
	while (i < dim * 4)
	{
		if (i / 4 == 0)
		{
			if (setting[i] != '0' + ft_box_count(tab, 0, i % dim, 1, 0, dim))
				return (0);
		}
		if (i / 4 == 1)
		{
			if (setting[i] != '0'
				+ ft_box_count(tab, dim - 1, i % dim, -1, 0, dim))
				return (0);
		}
		if (i / 4 == 2)
		{
			if (setting[i] != '0' + ft_box_count(tab, i % dim, 0, 0, 1, dim))
				return (0);
		}
		if (i / 4 == 3)
		{
			if (setting[i] != '0' + ft_box_count(tab, i % dim, dim - 1, 0, -1, dim))
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_line_check(char **tab, int row, int col)
{
	int	i;

	i = col - 1;
	while (i >= 0)
	{
		if (tab[row][col] == tab[row][i])
			return (0);
		i--;
	}
	return (1);
}
