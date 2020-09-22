/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlissoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 12:29:28 by vlissoir          #+#    #+#             */
/*   Updated: 2020/09/17 12:52:38 by vlissoir         ###   ########.fr       */
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

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		while ((s1[i] == s2[i]) && ((s1[i] != '\0')
					&& (s2[i] != '\0')) && (i < n))
		{
			i++;
		}
		if (i == n)
			return (0);
		while ((s1[i] != s2[i]) && (i < n))
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

int		main(void)
{
	char s1[] = "julie";
	char s2[] = "julie";
	unsigned int n = 174;
	printf("Mafonction = %i\n", ft_strncmp(s1, s2, n));
	printf("Vraifonction = %i\n", strncmp(s1, s2, n));
	return (0);
}
