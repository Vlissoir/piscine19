/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlissoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 15:47:25 by vlissoir          #+#    #+#             */
/*   Updated: 2020/09/15 17:40:25 by vlissoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_alpha(char *str)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (str[size])
	{
		size++;
	}
	while (((64 < str[i]) && (str[i] < 91))
			|| ((96 < str[i]) && (str[i] < 123)))
	{
		i++;
	}
	if (i == size)
	{
		return (1);
	}
	return (0);
}
