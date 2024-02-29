/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:02:50 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/25 22:44:18 by murasakinx       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_puterror(void)
{
	write(2, "Error\n", 6);
}

void	ft_putdicterror(void)
{
	write(2, "Dict Error\n", 11);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	ft_managenbr(t_dict *dict, char *nb, t_ull i, t_ull p10)
{
	char	*r;
	char	*retenue;
	t_ull	len;

	if (p10 && (p10 == 2 || p10 % 3 == 0))
	{
		r = ft_strdup("999");
		len = ft_intstrlen(nb);
		while (len == ft_intstrlen(nb))
		{
			r = ft_subintstr(r, "1");
			nb = ft_subintstr(nb, dict[i].key);
		}
		retenue = ft_subintstr(ft_strdup("999"), r);
		ft_putnbr(dict, retenue);
		ft_putstr(" ");
	}
	ft_putstr(dict[i].value);
	if (!(p10 == 2 || p10 % 3 == 0))
		nb = ft_subintstr(nb, dict[i].key);
	if (ft_intstrcmp(nb, "0"))
	{
		ft_putstr(" ");
		ft_putnbr(dict, nb);
	}
}

void	ft_putnbr(t_dict *dict, char *nb)
{
	t_ull	i;
	t_ull	p10;

	i = 0;
	while (dict[i].key)
	{
		if (!ft_intstrcmp(dict[i].key, nb))
		{
			ft_putstr(dict[i].value);
			ft_putstr("\n");
			return ;
		}
		else if (ft_intstrcmp(dict[i].key, nb) == -1)
			i++;
		else
			break ;
	}
	i--;
	p10 = ft_tenpower(dict[i].key);
	ft_managenbr(dict, nb, i, p10);
	ft_putstr("\n");
}
