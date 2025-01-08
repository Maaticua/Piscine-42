/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:19:57 by macaruan          #+#    #+#             */
/*   Updated: 2024/09/25 17:53:29 by macaruan         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (j == 1)
				str[i] = str[i] -32;
		}
		if ((str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	str[] = "AaDut,, 42mots quarante-deux; cinquante+et+un";
	char    str1[] = "??aDut, Comment    vas ? 42mots quGGFarante-deux;k";
	char    str2[] = " Tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("1 \n%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
	
	printf("2 \n%s\n", str1);
	ft_strcapitalize(str1);
	 printf("%s\n", str1);

	printf("3 \n%s\n", str2);
	ft_strcapitalize(str2);
	printf("%s\n", str2);
}
*/
