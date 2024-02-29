/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 08:55:57 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/11 09:14:47 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size -1)
	{
		j = 0;
		while (j < size - i -1)
		{
			if (tab[j] > tab[j +1])
			{
				ft_swap(&tab[j], &tab[j +1]);
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>
void printArray(int arr[], int size)
{
    int i = 0;
    while (i < size) {
        printf("%d ", arr[i]);
        i++;
    }
}

int	main()
{
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);

    ft_sort_int_tab(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;

}
*/
