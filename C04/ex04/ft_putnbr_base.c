/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 09:05:35 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/14 15:41:28 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_double_check(char *pt_base)
{
	int	i;
	int	j;

	i = 0;
	while (*(pt_base + i))
	{
		j = i + 1;
		while (*(pt_base + j))
		{
			if ((*pt_base + i) == (*pt_base + j))
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_get_base_value(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (i);
}

void	ft_print(int nbr, char *base, int base_value)
{
	int	i;

	i = nbr;
	if (i < 0)
	{
		i = -i;
		ft_putchar('-');
	}
	if (i >= base_value)
	{
		ft_print(i / base_value, base, base_value);
	}
	ft_putchar(base[i % base_value]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_value;

	base_value = ft_get_base_value(base);
	if (base_value < 2)
	{
		return ;
	}
	if (ft_double_check(base))
	{
		return ;
	}
	ft_print(nbr, base, base_value);
}
/*
int	main()
{
	ft_putnbr_base(42, "0123456789abcdef");
	return (0);
}
*/
