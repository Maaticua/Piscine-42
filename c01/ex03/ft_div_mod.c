/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:46:34 by macaruan          #+#    #+#             */
/*   Updated: 2024/09/20 13:00:21 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 2;
	div = 42;
	mod = 42;

	printf("%d %d \n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d", div, mod);
}
*/
