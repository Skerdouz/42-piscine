/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:20:00 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/26 17:42:18 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min));
	if (!array)
		return (NULL);
	i = 0;
	while (min < max)
		array[i++] = min++;
	return (array);
}
/*
#include <stdio.h>
int	main()
{
	int *array = ft_range(26, 25);
	if (!array)
		return (0);
	for (int i = 0; i < 16; i++)
		printf("%d ", array[i]);
	return (0);
}
*/
