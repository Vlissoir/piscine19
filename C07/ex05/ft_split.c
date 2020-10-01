/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlissoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 09:15:04 by vlissoir          #+#    #+#             */
/*   Updated: 2020/09/27 17:52:26 by vlissoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*comparaison du caractere de str (=c) a la chaine de caractere charset (= separateur))*/
int	ft_compare(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i++])
	{
		if (charset[i] == c)
		return (1);	
	}
	return (0);
}

int 


/*char **ft_split(char *str, char *charset)
{

}
*/

int main(void)
{
	char *c;
	int i;
	char *charset;
	
	i = 1;
	c = "av";
	charset = "vbdcfgtf";
	printf("%d\n", ft_compare(*c, charset));	
}
