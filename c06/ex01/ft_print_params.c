/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:31:11 by macaruan          #+#    #+#             */
/*   Updated: 2024/10/01 19:19:41 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	int	l;

	i = 0;
	l = 1;
	while (l < ac)
	{
		while (av[l][i])
		{
			write(1, &av[l][i], 1);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		l++;
	}
	return (0);
}
