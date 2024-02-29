/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:14:15 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/08 15:38:10 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	a;

	a = 48;
	while (a < 58)
	{
		ft_putchar(a);
		a++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
