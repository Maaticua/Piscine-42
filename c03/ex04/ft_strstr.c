/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:25:40 by macaruan          #+#    #+#             */
/*   Updated: 2024/09/28 17:05:48 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			else
				j++;
		}
	j = 0;
	i++;
	}
	return (0);
}
/*
int	main()
{
	char	str[] = "jo bonjour";
	char	to_find[] = "jou";

	printf("%s \n %s\n", str, to_find);
	printf("%s", ft_strstr(str, to_find));

}
*/
