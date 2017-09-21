/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 14:33:31 by osakout           #+#    #+#             */
/*   Updated: 2017/09/13 14:46:57 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		while ((str[i] >= 65 && str[i] <= 90))
		{
			i++;
			if (str[i] == '\0')
				return (1);
		}
		return (0);
	}
	return (1);
}

int	main()
{
	char chaine[10] = "ABC DE";

	printf(" %d ", ft_str_is_uppercase(chaine));
	return (0);
}
