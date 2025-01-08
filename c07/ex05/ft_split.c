/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:19:52 by macaruan          #+#    #+#             */
/*   Updated: 2024/10/09 14:04:48 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

int	ft_sep_detector(char c, char *charset)
{
	int	i;

	i = 0;
	while(charset[i])
	{
		if (c == charset[i])
			return(1);
		i++;
	}
	return(0);
}

char	*strcpyo(char *src, int deb, int fin)
{
	char	*res;
	int		i;

	res = malloc(sizeof(char) * (fin - deb + 1));
	if (!res)
		return (res);
	i = 0;
	while(i < fin - deb)
	{
		res[i] = src[deb + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		deb;
	int		itab;
	int		i;

	deb = 0;
	itab = 0;
	i = 0;

	res = malloc(sizeof(char *) * (ft_strlen(str) + 1));
	while (str[i])
	{
		while (str[i] && ft_sep_detector(str[i], charset))
			i++;
		deb = i;
		while (str[i] && !ft_sep_detector(str[i], charset))
			i++;
		if (deb < i)
			res[itab++] = strcpyo(str, deb, i);
	}
	res[itab] = NULL;
	return (res);
}
int	main(void)
{
	char	**str;
	int	i;
	
	i = 0;
	str = ft_split("bonjour les couilles molle", " ");
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}
