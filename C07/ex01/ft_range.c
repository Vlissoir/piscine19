/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlissoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 15:43:37 by vlissoir          #+#    #+#             */
/*   Updated: 2020/09/27 14:47:20 by vlissoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int size;
	int *tab;
	int i;

	i = 0;
	while (min >= max)
		return (0);
	size = max - min;
	tab = malloc(sizeof(int) * size);
	while (max > min)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

int		main(void)
{
	int max;
	int min;
	int *tab;
	int i;

	i = 0;
	max = 750;
	min = -210;
	tab = ft_range(min, max);
	while (tab[i] < max)
	{
		printf("%d ", tab[i]);
		i++;
	}
}
