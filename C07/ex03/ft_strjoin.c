/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlissoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 19:24:52 by vlissoir          #+#    #+#             */
/*   Updated: 2020/09/30 08:02:21 by vlissoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		ft_size(char *dest)
{
	unsigned int sized;

	sized = 0;
	while (dest[sized] != '\0')
	{
		sized++;
	}
	return (sized);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int j;
	unsigned int sized;

	sized = ft_size(dest);
	i = sized;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int j;
	char *dest;

	i = 0;
	j = 0;
	while (j <= size)
	{
		i = i + ft_size(strs[j]) + ft_size(sep);
		j++;
	}
	i = i - ft_size(sep);
	if (!(dest = malloc(sizeof(char *) * (i + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (j < size)
	{
		ft_strcat(&dest[i], strs[j]);
		i = i + ft_size(strs[j]);
		ft_strcat(&dest[i], sep);
		i = i + ft_size(sep);
		j++;
	}
	if (j == size)
	{
		ft_strcat(&dest[i], strs[j]);
		i = i + ft_size(strs[j]);
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;

	strs = (char**)malloc(4 * sizeof(strs));
	strs[0] = "hihihih";
	strs[1] = "cavacava";
	strs[2] = "mdr";
	strs[3] = "123456";
	separator = "-";
	index = 2;
	while (index < 4)
	{
		result = ft_strjoin(index, strs, separator);
		printf("result with size = %d : $%s$\n", index, result);
		free(result);
		index++;
	}
}
