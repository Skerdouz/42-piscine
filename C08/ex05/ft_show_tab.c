/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:58:02 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/27 19:16:15 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_str_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	ft_int_print(int nb)
{
	char	c;

	if (nb >= 10)
	{
		ft_int_print(nb / 10);
		c = (nb % 10) + '0';
		write(1, &c, 1);
	}
	else
	{
		c = (nb % 10) + '0';
		write(1, &c, 1);
		return ;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_str_print(par[i].str);
		write(1, "\n", 1);
		ft_int_print(par[i].size);
		write(1, "\n", 1);
		ft_str_print(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main()
{
	t_stock_str *par = malloc(sizeof(t_stock_str) * 3);
	if (!par)
		return 0;
	par[0].size = 5;
	par[0].str = "testo";
	par[0].copy = "teste";
	par[1].size = 7;
	par[1].str = "ouiouio";
	par[1].copy = "nonnono";
	par[2].size = 0;
	par[2].str = "\0";
	par[2].copy = "\0";

	ft_show_tab(par);
	
	return (0);
}
*/
