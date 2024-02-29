/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:42:59 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/19 15:34:34 by lbrahins         ###   ########.fr       */
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
/*
#include <stdio.h>
int	main()
{
	int	i = 0;
	while (++i < 200)
		printf("%d:  %d\n", i, ft_is_prime(i));
	return (0);
}
*/
