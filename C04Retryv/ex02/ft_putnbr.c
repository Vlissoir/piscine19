/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlissoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 17:36:37 by vlissoir          #+#    #+#             */
/*   Updated: 2020/09/23 18:40:31 by vlissoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char chr)
{
	write(1, &chr, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int a;

	if (nb < 0)
	{
		ft_putchar(45);
		nb = -1 * nb;
	}
	a = nb;
	if (a >= 10)
	{
		ft_putnbr(a / 10);
	}
	ft_putchar(a % 10 + '0');
}

int main(void)
{
	ft_putnbr(42);
	return (0);
}

