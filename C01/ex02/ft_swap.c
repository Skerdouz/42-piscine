/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:27:54 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/08 19:13:29 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	int	n1 = 10;
	int	n2 = 5;
	
	printf("%d", n1);
	printf(" ");
	printf("%d", n2);
	printf("   ");

	ft_swap(&n1, &n2);
	
	printf("%d", n1);
	printf(" ");
	printf("%d", n2);
	return (0);
}
*/
