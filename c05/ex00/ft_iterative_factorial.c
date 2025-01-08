/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:17:20 by macaruan          #+#    #+#             */
/*   Updated: 2024/10/01 17:56:23 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		res = res * i++;
	}
	return (res);
}
/*
int	main(int ac, char *av[])
{
	if (ac != 2)
		return (0);
	printf("%d", ft_iterative_factorial(atoi(av[1])));
	return (0);
}
*/
