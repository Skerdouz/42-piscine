/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:54:24 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/22 13:12:13 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	exponent;

	exponent = 1;
	result = nb;
	if (power == 0 && nb < 0)
		return (1);
	if (power == 0 && nb >= 0)
		return (1);
	if (power < 0)
		return (0);
	while (++exponent <= power)
		result *= nb;
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_iterative_power(-3837, 0));
	printf("%d\n", ft_iterative_power(4, 0));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(0, 4));
	return (0);
}
*/
