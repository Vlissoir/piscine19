/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlissoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 16:25:13 by vlissoir          #+#    #+#             */
/*   Updated: 2020/09/29 14:29:56 by vlissoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_sqrt(int nb)
{
	unsigned int n;
	unsigned int a;

	n = 0;
	a = nb;
	if (a < 0)
		return (0);
	while (n * n <= a)
	{
		n++;
		if (n * n == a)
			return (n);
	}
	return (0);
}
