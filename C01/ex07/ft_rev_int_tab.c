/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlissoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 18:26:05 by vlissoir          #+#    #+#             */
/*   Updated: 2020/09/15 07:38:24 by vlissoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int x;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		x = tab[i];
		tab[i] = tab[j];
		tab[j] = x;
		++i;
		--j;
	}
}
