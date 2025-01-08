/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:11:59 by macaruan          #+#    #+#             */
/*   Updated: 2024/10/07 14:37:45 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	
	if(min >= max)
	{
		*range = NULL;
		return(0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return(-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return(i);
}
/*
int	main()
{
	int	*tab;
	int	i;

	i = ft_ultimate_range(&tab, 1, 45);
	i = 0;
	while(i < 44)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	free(tab);
	return (0);

}
*/
