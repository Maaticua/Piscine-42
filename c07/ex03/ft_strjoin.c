/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaruan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:38:41 by macaruan          #+#    #+#             */
/*   Updated: 2024/10/09 13:38:41 by macaruan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = ft_strlen(dest);
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_size(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + ft_strlen(sep) * (size - 1);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*rep;
	int		i;
	int		len;

	i = 0;
	len = ft_size(size, strs, sep);
	rep = (char *)malloc(len * sizeof (char) + 1);
	if (!rep)
		return (rep);
	while (i < size)
	{
		ft_strcat(rep, strs[i]);
		if (i < size - 1)
			ft_strcat(rep, sep);
		i++;
	}
	rep[len + 1] = '\0';
	return (rep);
}
int	main()
{
	int	i;
	char	*rep;
	char	sep[] = " ";
	char	*strs[3];
	strs[0] = "bonjour";
	strs[1] = "les";
	strs[2] = "cons";


	i = 0;
	rep = ft_strjoin(3, strs, sep);
	printf("%s", rep);
	free(&*rep);

}
