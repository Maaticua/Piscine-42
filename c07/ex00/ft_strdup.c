/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:33:23 by macaruan          #+#    #+#             */
/*   Updated: 2024/10/05 15:02:55 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}
char	*ft_strdup(char *src)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(src);
	char *dest = (char *)malloc(len * sizeof (char) + 1);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
/*
int	main()
{
	char src[] = "bonjour";
	char *dest = ft_strdup(src);

	ft_strdup(src);
	printf("%s\n", dest);

	free(&*dest);
}
*/
