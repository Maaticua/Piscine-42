/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:22:46 by macaruan          #+#    #+#             */
/*   Updated: 2024/09/25 11:35:25 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= ' ' && str[i] <= '~') || (str[0] == '\0')))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	printf("bonjour: %d\n", ft_str_is_printable("bonjour"));
	printf("BONJOUR: %d\n", ft_str_is_printable("BONJOUR"));
	printf("zermi: %d\n", ft_str_is_printable(""));
	printf("123456: %d\n", ft_str_is_printable("123456"));
	return (0);
}
*/
