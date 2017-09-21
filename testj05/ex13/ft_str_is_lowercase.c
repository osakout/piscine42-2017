/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 14:33:31 by osakout           #+#    #+#             */
/*   Updated: 2017/09/13 14:45:16 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		while ((str[i] >= 97 && str[i] <= 122))
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
	char chaine[10] = "";

	printf(" %d ", ft_str_is_lowercase(chaine));
	return (0);
}
