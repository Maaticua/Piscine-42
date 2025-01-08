/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:44:02 by macaruan          #+#    #+#             */
/*   Updated: 2024/09/23 16:56:00 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	printf("bonjour: %d\n", ft_str_is_numeric("123654"));
	printf("bonjour2727: %d\n", ft_str_is_numeric("bonjour2727"));
	printf("bon jour: %d\n", ft_str_is_numeric("bon jour"));
}
*/
