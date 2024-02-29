/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:27:43 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/11 09:17:56 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a / *b;
	*b = *a % *b;
	*a = c;
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main()
{
	int	a = 10;
	int	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d", a, b);
	a = 2964;
	b = 6;
	ft_ultimate_div_mod(&a, &b);
	printf("%s", " | ");
	printf("%d, %d", a,  b);
	a = 2983;
	b = -1;
	ft_ultimate_div_mod(&a, &b);
	printf("%s", " | ");
	printf("%d, %d", a,  b);
	return (0);
}
*/
