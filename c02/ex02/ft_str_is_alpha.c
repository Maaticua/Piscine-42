/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:46:17 by macaruan          #+#    #+#             */
/*   Updated: 2024/09/25 11:05:22 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	char	j;
	int		i;

	i = 0;
	while (str[i])
	{
		j = str[i];
		if (!((j >= 'a' && j <= 'z') || (j >= 'A' && j <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	printf("bonjour: %d\n", ft_str_is_alpha("bonjour"));
	printf("bonjour2727: %d\n", ft_str_is_alpha("bonjour2727"));
	printf("bon jour: %d\n", ft_str_is_alpha("bon jour"));
	printf("void: %d\n", ft_str_is_alpha(""));
	printf("BONJOUR: %d\n", ft_str_is_alpha("BONJOUR"));
	printf("··· −−− ···: %d\n", ft_str_is_alpha("··· −−− ···"));
}
*/
