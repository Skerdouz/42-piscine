/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:57:21 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/15 14:02:27 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	destlength;
	unsigned int	srclength;

	i = 0;
	j = 0;
	destlength = ft_strlen(dest);
	srclength = ft_strlen(src);
	while (i < size && dest[i])
		i++;
	if (i < size)
		return (srclength + i);
	while (src[j])
	{
		if (j < size - i -1)
		{
			dest[i] = src[j];
			i++;
		}
		j++;
	}
	dest[i] = '\0';
	return (destlength);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char dest[100] = "Ceci est un test";
    char *src = "Voir si ca fonctionne";

    printf("%s\n", dest);
    unsigned int result = ft_strlcat(dest, src, 16);
    printf("%s, result: %d\n", dest, result);
    return(0);
}
*/
