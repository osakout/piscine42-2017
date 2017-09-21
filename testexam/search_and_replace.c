/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 11:07:02 by osakout           #+#    #+#             */
/*   Updated: 2017/09/21 14:27:34 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int		i;
	char	*str;

	str = av[1];
	i = 0;
	if (ac == 4 && av[2][1] == '\0' && av[3][1] == '\0')
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] == av[2][0])
			{
				av[1][i] = av[3][0];
				str[i] = av[1][i];
			}
			i++;
		}
		write(1, str, i);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
