/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:42:47 by macaruan          #+#    #+#             */
/*   Updated: 2024/09/29 18:56:11 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && j < n)
	{
		i++;
		j++;
	}
	if (j == n)
		return (0);
	return (s1[i] - s2[i]);
}
int	main()
{
	unsigned int 	n;

	n = 3;
	printf("test de lautre %d\n", ft_strncmp("\201", "a", n));
	printf("VOID VOID %d\n", ft_strncmp("", "", n));
	printf("vilain pasbeau %d\n", ft_strncmp("vilain", "pasbeau", n));
}
