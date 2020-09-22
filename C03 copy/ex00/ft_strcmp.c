/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlissoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 08:58:59 by vlissoir          #+#    #+#             */
/*   Updated: 2020/09/17 12:16:35 by vlissoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int		ft_size(char *s1)
{
	unsigned int size;

	size = 0;
	while (s1[size] != '\0')
	{
		size++;
	}
	return (size);
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int i;
	unsigned int sizes1;
	unsigned int sizes2;

	i = 0;
	sizes1 = ft_size(s1);
	sizes2 = ft_size(s2);
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		while ((s1[i] == s2[i]) && ((s1[i] != '\0') && (s2[i] != '\0')))
		{
			i++;
		}
		if ((i == sizes1) && (i == sizes2))
			return (0);
		while (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

int		main(void)
{
	s1 = "Bonjour1";
	s2 = "Bonjour";
	printf("Mafonction = %i\n", ft_strcmp(s1, s2));
	printf("Vraifonction = %i\n", strcmp(s1, s2));
	return (0);
}
