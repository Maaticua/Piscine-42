/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:16:14 by macaruan          #+#    #+#             */
/*   Updated: 2024/09/25 11:39:57 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] +32;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	str[] = "bonjour";
	char    str1[] = "BONJOUR";
	char    str2[] = "bonjour les cons";
	char    str3[] = "123456";

	printf("%s\n", str);
	ft_strlowcase(str);
	printf("%s\n", str);

	printf("%s\n", str1);
        ft_strlowcase(str1);
        printf("%s\n", str1);

	printf("%s\n", str2);
        ft_strlowcase(str2);
        printf("%s\n", str2);

	printf("%s\n", str3);
        ft_strlowcase(str3);
        printf("%s\n", str3);
}
*/
