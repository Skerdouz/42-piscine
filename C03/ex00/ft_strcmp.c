/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:52:40 by lbrahins          #+#    #+#             */
/*   Updated: 2024/02/14 08:33:57 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i]) && (s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int main() {

    char login[40];
    char password[40];

    printf( "Please, enter your login: " );
    scanf( "%s", login );

    printf( "Enter your password: " );
    scanf( "%s", password );
       
    if ( strcmp( login, "bond" ) == 0 && strcmp( password, "007" ) == 0 ) {
        printf( "You are connected\n" );
    } else {
        printf( "Login failed. Retry later.\n" );
    } 

    return 0;
}
*/
