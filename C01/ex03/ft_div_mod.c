/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:09:14 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/09 10:23:54 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	int	a = 10;
	int	b = 3;
	int	div;
	int	mod;
	ft_div_mod(a, b, &div, &mod);
	printf("%d", a);
	printf(" ");
	printf("%d", b);
	printf(" ");
	printf("%d", div);
	printf(" ");
	printf("%d", mod);
	return (0);
}
*/
