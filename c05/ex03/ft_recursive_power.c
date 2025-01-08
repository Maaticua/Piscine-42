/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 20:03:04 by macaruan          #+#    #+#             */
/*   Updated: 2024/09/29 20:18:53 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power >= 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}
/*
int	main(int ac, char *av[])
{
	if (ac != 3)
		return (1);
	printf("%d", ft_recursive_power(atoi(av[1]), atoi(av[2])));
	return (0);
}
*/
