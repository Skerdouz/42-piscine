/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:35:59 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/29 17:48:02 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int    count_full_len(char **strs, int size)
{
    int    i;
    int    j;
    int    count;

    i = 0;
    count = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j])
        {
            count++;
            j++;
        }
        i++;
    }
    return (count);
}

char    *ft_strcat(char *dest, char *src)
{
    int    i;
    int    j;

    i = 0;
    j = 0;
    while (dest[i])
        i++;
    while (src[j])
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    int        i;
    int        full_len;
    char    *new_str;

    i = 0;
    if (size == 0 || (!strs))
    {
        new_str = malloc(1);
        new_str[0] = '\0';
        return (new_str);
    }
    full_len = count_full_len(strs, size) + ft_strlen(sep) * (size - 1);
    new_str = malloc(sizeof(char) * full_len + 1);
    if (!new_str)
        return (NULL);
    new_str[i] = '\0';
        i = -1;
    while (++i < size)
    {
        new_str = ft_strcat(new_str, strs[i]);
        if (i < size - 1)
            new_str = ft_strcat(new_str, sep);
    }
    return (new_str);
}
/*
#include <stdio.h>
int	main()
{
	char **strs = malloc(sizeof(char *) * 3);
	strs[0] = malloc(sizeof(char) * 5);
	strs[1] = malloc(sizeof(char) * 4);
	strs[2] = malloc(sizeof(char) * 5);
	strs[0] = "nice";
	strs[1] = "oui";
	strs[2] = "toto";
	char *result = ft_strjoin(3, strs, ", ");
	if (!result)
	{
		printf("probleme");
		return (0);
	}
	printf("%s", result);
	return (0);
}
*/
