/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:33:42 by macaruan          #+#    #+#             */
/*   Updated: 2024/09/26 10:55:33 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main()
{
	printf("bonjour BONJOUR %d\n", ft_strcmp("bonjour","BONJOUR" ));
	printf("bonjour bonjour %d\n", ft_strcmp("bonjour","bonjour" ));
	printf("VOID VOID %d\n", ft_strcmp("","" ));
	printf("bonjour bonJOUR %d\n", ft_strcmp("bonjour","bonJOUR" ));
}
*/
