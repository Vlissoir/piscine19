/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlissoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 07:49:43 by vlissoir          #+#    #+#             */
/*   Updated: 2020/09/13 15:38:09 by vlissoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char d)
{
	write(1, &d, 1);
}

void	ft_putnbr(int nb)
{
	long int a;

	a = nb;
	if (a < 0)
	{
		ft_putchar(45);
		a = -a;
	}
	if (a >= 10)
	{
		ft_putnbr(a / 10);
		ft_putchar(a % 10 + '0');
	}
	else
	{
		ft_putchar(a + '0');
	}
}
