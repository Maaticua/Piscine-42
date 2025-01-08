/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:35:21 by macaruan          #+#    #+#             */
/*   Updated: 2024/09/20 13:01:59 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int a;
	int b;

	a = 1;
	b = 2;

	printf("%d", a);
	printf("%d", b);
	printf("%c", '\n');

	ft_swap(&a, &b);

	printf("%d", a);
	printf("%d", b);

}
*/
