/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_in_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:15:09 by macaruan          #+#    #+#             */
/*   Updated: 2024/09/22 15:43:50 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tempo;

	while (i < size)
	{
		while (j < size -1)
		{
			if (tab[j] > tab[j + 1])
			{
				tempo = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = tempo;
				j = 0;
			}
			else
				j++;
		}
		i++;
	}
}
/*
int	main()
{
	int	tab[5] = {8, 4, 7, 1, 9};
	int	size;
	int	i;

	i = 0;
	size = 5;

	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}

	printf("\n");

	ft_sort_int_tab(tab, size);

	i = 0;
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return(0);

}
*/
