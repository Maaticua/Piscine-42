/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:58:07 by macaruan          #+#    #+#             */
/*   Updated: 2024/09/23 17:18:24 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[0] == '\0')))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	printf("bonjour: %d\n", ft_str_is_lowercase("bonjour"));
	printf("BONJOUR: %d\n", ft_str_is_lowercase("BONJOUR"));
	printf("zermi: %d\n", ft_str_is_lowercase(""));
	printf("123456: %d\n", ft_str_is_lowercase("123456"));
	return (0);
}
*/
