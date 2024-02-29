/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 11:10:42 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/18 16:23:45 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	**ft_tab_init(int dim)
{
	char	**tab;
	int		i;
	int		j;

	tab = malloc(sizeof(char *) * dim);
	i = 0;
	while (i < dim)
	{
		tab[i] = malloc(sizeof(char) * dim);
		j = 0;
		while (j < dim)
		{
			tab[i][j] = '0' + 1 +((i + j) % 4);
			j++;
		}
		i++;
	}
	return (tab);
}	

/*
int	main()
{
	char **map = ft_init_size(4);
	ft_init_values(map);
	return (0);
}
*/
