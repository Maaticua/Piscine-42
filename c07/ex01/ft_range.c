/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:05:27 by macaruan          #+#    #+#             */
/*   Updated: 2024/10/05 18:10:04 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int i;
	int j;
	int *tab = (int *)malloc((max - min) * sizeof (int));
	
	j = 0;
	i = min;
	while (i < max)
	{
		tab[j] = i;
		i++;
		j++;
	}
	return(tab);
}
/*
int	main(int ac, char *av[])
{
	(void)ac;
	int i = 0;
	int *tab = ft_range(atoi(av[1]), atoi(av[2]));

	while(i < atoi(av[2]) - atoi(av[1]))
	{
		printf("%d, ", tab[i]);
		i++;
	}

	free(&*tab);

}
*/
