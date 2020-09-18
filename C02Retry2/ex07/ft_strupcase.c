/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlissoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 20:05:11 by vlissoir          #+#    #+#             */
/*   Updated: 2020/09/16 19:28:00 by vlissoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char		*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && 'z' >= str[i])
		{
			str[i] = str[i] - 32;
		}
		str[i] = str[i];
		i++;
	}
	return (str);
}