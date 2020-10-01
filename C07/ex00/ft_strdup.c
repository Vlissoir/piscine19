/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlissoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 14:04:29 by vlissoir          #+#    #+#             */
/*   Updated: 2020/09/24 15:41:35 by vlissoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	unsigned int	i;
	unsigned int	size;
	char			*allocation;

	i = 0;
	size = 0;
	allocation = 0;
	while (src[size])
		size++;
	allocation = malloc(sizeof(*src) * size + 1);
	if (allocation == NULL)
		return (NULL);
	while (src[i] && i < size)
	{
		allocation[i] = src[i];
		i++;
	}
	allocation[i] = '\0';
	return (allocation);
}

int		main(void)
{
	char	*str;
	char	*allocated;

	str = "Hello World with malloc()";
	printf("x  : base  : $%s$ @ %p\n", str, str);
	allocated = strdup(str);
	printf("c  : alloc : $%s$ @ %p\n", allocated, allocated);
	allocated = ft_strdup(str);
	printf("ft : alloc : $%s$ @ %p\n", allocated, allocated);
}
