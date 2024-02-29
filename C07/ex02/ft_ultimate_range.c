/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:20:16 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/26 16:04:52 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int	**range, int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	array = malloc(sizeof(int) * (max - min));
	if (!array)
		return (-1);
	while (min != max)
		array[i++] = min++;
	*range = array;
	return (i);
}
/*
#include <stdio.h>
int	main()
{
	int	**range = malloc(10 * sizeof(int *));
	int value = ft_ultimate_range(range, 10, 25);
	if (value == -1)
	{
		printf("Error");
		return (0);
	}
	if (*range == NULL)
	{
		printf("Range is null");
		return (0);
	}
	for (int i = 0; i < 16; i++)
		printf("%d ", range[0][i]);
	return (0);
}
*/
