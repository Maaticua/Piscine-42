/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:19:39 by macaruan          #+#    #+#             */
/*   Updated: 2024/09/25 11:32:28 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[0] == '\0')))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	printf("bonjour: %d\n", ft_str_is_uppercase("bonjour"));
	printf("BONJOUR: %d\n", ft_str_is_uppercase("BONJOUR"));
	printf("Void: %d\n", ft_str_is_uppercase(""));
	printf("123456: %d\n", ft_str_is_uppercase("123456"));
	printf("... ___ ...: %d\n", ft_str_is_uppercase("... ___ ..."));
	return (0);
}
*/
