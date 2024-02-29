/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eazard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 11:36:42 by eazard            #+#    #+#             */
/*   Updated: 2024/02/18 12:04:44 by eazard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_col_start(char **tab, char *setting, int dim ,int l, int r, int find)
{
	int	i;
	if (!*find)
	{
		if (l != r)
		{
			i = l;
			while (i <= r)
			{
				ft_swap(&(tab[l][0]), &(tab[i][0]));
				colmid(tab, setting, dim, 1, 0, dim - 1);
				ft_col_start(tab, setting, dim, l + 1, r);
				ft_swap(&(tab[l][0]), &(tab[i][0]));
				i++;
			}
		}
	}
}

void	ft_col_mid(char **tab, char *setting, int dim, int col, int l, int r, int find)
{
	int     i;
	
	if (!*find)
	{
		if (l == r)
		{
			if (col == dim - 2)
				ft_col_end(tab, setting, dim, 0, r);
			else
				ft_col_mid(tab, setting, dim, col + 1, 0, r);
		}
		else
		{
		        i = l;
		        while (i <= r)
		        {
		                ft_swap(&(tab[l][col]), &(tab[i][col]));
				if (ft_line_check(tab, l, col))
		                	ft_col_mid(tab, setting, dim, col, l + 1, dim - 1);
		                ft_swap(&(tab[l][col]), &(tab[i][col]));
		                i++;
		        }
		}
	}
}

void	ft_col_end(char **tab, char *setting, int dim, int l, int r, int find)
{
	int	i;

	if (!*find)
	{
		if(l==r)
		{
			if (ft_solution_check(tab,setting,dim))
				*find = 1;
		}
		else
		{
			i = l;
			while (i <= r)
			{
				ft_swap(&(tab[l][dim - 1]), &(tab[i][dim -1]));
				if (ft_line_check(tab, l,dim - 1))
					ft_col_end(tab, setting, dim, l + 1, dim - 1);
				ft_swap(&(tab[l][dim - 1]), &(tab[i][dim -1]));
				i++;
			}
		}
	}
}

void	ft_swap(char* a, char *b)
{
	char	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
