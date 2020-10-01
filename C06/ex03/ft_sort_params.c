/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlissoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 10:25:54 by vlissoir          #+#    #+#             */
/*   Updated: 2020/09/25 17:07:20 by vlissoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *argv1, char *argv2)
{
	unsigned int i;

	i = 0;
	while (argv1[i] != '\0' && argv2[i] != '\0' && argv1[i] == argv2[i])
		i++;
	if (argv1[i] != argv2[i])
		return (argv1[i] - argv2[i]);
	else
		return (0);
	return (argv1[i] - argv2[i]);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i++], 1);
		write(1, "\n", 1);
	}
}

int		main(int argc, char *argv[])
{
	int		i;
	char	*tmp;

	i = 1;
	if (argc > 1)
	{
		while (argv[i + 1] != '\0')
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				i = 1;
			}
			else
				i++;
		}
		i = 1;
		while (argv[i])
			ft_putstr(argv[i++]);
	}
	return (0);
}
