/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlissoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 07:44:11 by vlissoir          #+#    #+#             */
/*   Updated: 2020/09/30 18:36:39 by vlissoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

int					ft_strlen(char *av)
{
	unsigned int size;

	size = 0;
	while (av[size])
		size++;
	return (size);
}

char				*ft_strdup(char *src)
{
	unsigned int	i;
	unsigned int	size;
	char			*allocation;

	i = 0;
	size = 0;
	allocation = 0;
	while (src[size])
		size++;
	allocation = malloc(sizeof(*src) * size + 1);
	if (allocation == NULL)
		return (NULL);
	while (src[i] && i < size)
	{
		allocation[i] = src[i];
		i++;
	}
	allocation[i] = '\0';
	return (allocation);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*par;
	int				i;

	i = 0;
	if (ac < 0)
		ac = 0;
	if (!(par = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (NULL);
	while (ac > i)
	{
		par[i].size = ft_strlen(av[i]);
		par[i].str = av[i];
		par[i].copy = ft_strdup(av[i]);
		i++;
	}
	par[i].str = 0;
	return (par);
}
