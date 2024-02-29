/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 07:47:56 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/09 10:26:40 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char	*str = "test";
	int	n = ft_strlen(str);
	printf("%d", n);
	return (0);
}
*/
