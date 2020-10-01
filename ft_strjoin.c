/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlissoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 19:24:52 by vlissoir          #+#    #+#             */
/*   Updated: 2020/09/30 09:28:03 by vlissoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = -1;
	while (++j < size) //Here
		i = i + ft_size(strs[j]) + ft_size(sep);
	i = i - ft_size(sep);
	if (!(dest = malloc(sizeof(char *) * (i + 1))))
		return (NULL);
	i = 0;
	j = -1;
	while (++j < size - 1) //here
	{
		ft_strcat(&dest[i], strs[j]);
		i = i + ft_size(strs[j]);
		ft_strcat(&dest[i], sep);
		i = i + ft_size(sep);
	}
	if (j == size - 1) //here
		ft_strcat(&dest[i], strs[j]);
	dest[i + ft_size(strs[j])] = '\0';
	return (dest);
}

#include <stdio.h>

int		main(int argc, char **argv)
{
	printf("size: %d\n", argc - 2);
	printf("%s\n", ft_strjoin(argc - 2, &argv[2], argv[1]));
	return (0);
}
