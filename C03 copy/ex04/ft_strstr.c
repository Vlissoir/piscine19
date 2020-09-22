/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlissoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 16:27:32 by vlissoir          #+#    #+#             */
/*   Updated: 2020/09/18 18:49:28 by vlissoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int		ft_strlen(char *chr)
{
	unsigned int size;

	size = 0;
	while (chr[size] != '\0')
	{
		size++;
	}
	return (size);
}


char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int j;
	unsigned int sizeS2;

	i = 0;
	sizeS2 = ft_strlen(to_find);
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0') 
	{ 
		if (str[i] == to_find[0])
		{
			j = 1;
			while ((to_find[j] != '\0') && (str[i + j] == to_find[j]))
			{
				j++;
			}
			if (to_find[j] == '\0')
			return (&str[i++]);
		}
		i++;
	}
	return (0);
}

int		main(void)
{
	char str[] = "++//((";
	char to_find [] = "+/";
	char *result;

	result = strstr(str, to_find);
	printf("Ma fonction : %s", ft_strstr(str, to_find));
	printf("Fonction orginale : %s", result);
}
