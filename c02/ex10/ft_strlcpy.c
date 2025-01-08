/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:47:41 by macaruan          #+#    #+#             */
/*   Updated: 2024/09/25 11:17:26 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (size == 0)
		return (i);
	while (src[j] != '\0' && j < size - 1)
	{
		dest[j] = src[j];
		j++;
	}
	if (size > 0)
		dest[j] = '\0';
	return (i);
}
/*
int	main()
{
	char	src[] = "Arthur le mechant";
	char	dest[] = "Maati le gentil";
	unsigned int	size = 3;

	printf("%s\n%s\n", src, dest);
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%s\n%s\n", src, dest);
}
*/
