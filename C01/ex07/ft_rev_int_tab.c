/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 07:59:38 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/09 10:07:25 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int*b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	s;

	i = 0;
	s = size / 2;
	while (i < s)
	{
		ft_swap(&tab[i], &tab[size -1]);
		i++;
		size--;
	}
}
/*
#include <stdio.h>
int	main()
{
	int size = 5;
	int tab[5] = {2, 8, 4, 5, 7};
	ft_rev_int_tab(tab, size);
	for (int i = 0; i < 5; i++)
	{
		printf("%d", tab[i]);
	}
	return (0);
}
*/
