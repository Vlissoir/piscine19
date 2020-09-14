/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlissoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 12:05:54 by vlissoir          #+#    #+#             */
/*   Updated: 2020/09/12 14:09:03 by vlissoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char chr);

void	if_(int x, int y, int i, int j)
{
	if ((x == i || x == 0) && y == j)
	{
		ft_putchar(65);
	}
	else if ((x == i || x == 0) && y == 0)
	{
		ft_putchar(67);
	}
	else if ((x != i || x != 0) && (y == j || y == 0))
	{
		ft_putchar(66);
	}
	else if ((x == i || x == 0) && (y != j || y != 0))
	{
		ft_putchar(66);
	}
	else
	{
		ft_putchar(32);
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = x - 1;
	j = y - 1;
	while (--y >= 0)
	{
		while (--x >= 0)
		{
			if_(x, y, i, j);
		}
		x = i + 1;
		ft_putchar(10);
	}
}
