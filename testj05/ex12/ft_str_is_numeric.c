/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 14:19:59 by osakout           #+#    #+#             */
/*   Updated: 2017/09/13 14:27:08 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		while ((str[i] >= 48 && str[i] <= 57))
		{
			i++;
			if (str[i] == '\0')
				return(1);
		}
		return (0);
	}
	return (1);
}

int	main()
{
	char chaine[10] = "";

	printf(" %d ", ft_str_is_numeric(chaine));
	return (0);
}
