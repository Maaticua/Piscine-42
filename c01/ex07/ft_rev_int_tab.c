/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:42:58 by macaruan          #+#    #+#             */
/*   Updated: 2024/09/22 15:14:29 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	k;
	int	p;
	int	m;

	k = 0;
	m = size - 1;
	while (k <= size / 2)
	{
		p = tab[k];
		tab[k] = tab[m];
		tab[m] = p;
		k++;
		m--;
	}
}
/*
int	main(void)
{
	int	tab[4] = {-1, 2, 3, -4};
	int	size;
	int	i;

	i = 0;
	size = 4;

	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}

	printf("\n");

	ft_rev_int_tab(tab, size);
	
	i = 0;	
	while(i < size)
        {
                printf("%d", tab[i]);
                i++;
        }



}
*/
