/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:51:41 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/20 17:58:38 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int		result;

	result = nb;
	if ((power == 0 && nb == 0) || power == 0)
		return (1);
	if (power < 0)
		return (0);
	result *= ft_recursive_power(nb, power -1);
	if (result < 0)
		return (result);
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_recursive_power(-2, -3));
	printf("%d\n", ft_recursive_power(4, 0));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(0, 4));
	printf("%d\n", ft_recursive_power(4, 2));
	return (0);
}
*/
