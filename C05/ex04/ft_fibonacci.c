/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:58:27 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/15 13:58:47 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{	
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index < 2)
		return (index);
	else
		return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(13));
	return (0);
}
*/
