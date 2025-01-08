/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:43:40 by macaruan          #+#    #+#             */
/*   Updated: 2024/09/23 18:15:25 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] -32;
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
	ft_strupcase(str);
	printf("%s\n", str);

	printf("%s\n", str1);
        ft_strupcase(str1);
        printf("%s\n", str1);

	printf("%s\n", str2);
        ft_strupcase(str2);
        printf("%s\n", str2);

	printf("%s\n", str3);
        ft_strupcase(str3);
        printf("%s\n", str3);
}
*/
