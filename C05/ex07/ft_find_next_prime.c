/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:13:26 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/19 15:13:56 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb <= 1)
		return (0);
	while (i < nb / 2 && i < 46340)
	{
		i++;
		if (nb % i == 0)
			return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_find_next_prime(15));
	printf("%d\n", ft_find_next_prime(13));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(-4));
	return (0);
}
*/
