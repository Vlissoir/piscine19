/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlissoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 15:55:22 by vlissoir          #+#    #+#             */
/*   Updated: 2020/09/25 15:25:59 by vlissoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_fibonacci(int index)
{
	int n;

	n = 0;
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	if (n < index && index >= 2)
	{
		n = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (n);
}
