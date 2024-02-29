/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:24:05 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/11 16:04:26 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	ii;

	i = 0;
	ii = 0;
	while (dest[i])
		i++;
	while (src[ii] && ii < nb)
	{
		dest[i] = src[ii];
		i++;
		ii++;
	}
	dest[i] = '\0';
	return (dest);
}
