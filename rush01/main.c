/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 11:23:56 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/18 18:16:39 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#define DIM 4

char	*ft_args_format(char *str, int dim);
int		ft_args_validator(char *str, int dim);
char	**ft_tab_init(int dim);
void	ft_puterror(void);
void	ft_print_tab(char **tab, int dim);

int	main(int ac, char **av)
{
	int		find;
	char	**tab;
	char	*settings;

	find = 0;
	if (ac != 2)
		return (1);
	tab = ft_tab_init(DIM);
	if (!ft_args_validator(av[1], DIM))
	{
		ft_puterror();
		return (1);
	}
	settings = ft_args_format(av[1], DIM);
	find = ft_col_start();
	if (find == 0)
	{
		ft_puterror();
		return (1);
	}
	ft_print_tab(tab, DIM);
	free(tab);
	return (0);
}
