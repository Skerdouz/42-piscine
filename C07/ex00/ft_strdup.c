/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:48:27 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/26 14:45:51 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;

	i = 0;
	p = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!p)
		return (NULL);
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*
#include <stdio.h>
int	main()
{
	char	*str;

	str = ft_strdup("testcool");
	printf("adresse: %p, value: %s", &str, str);
	free(str);
	return (0);
}
*/
