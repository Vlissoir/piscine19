/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlissoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 13:07:08 by vlissoir          #+#    #+#             */
/*   Updated: 2020/09/17 16:18:13 by vlissoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
