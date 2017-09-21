/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 14:33:31 by osakout           #+#    #+#             */
/*   Updated: 2017/09/13 14:53:06 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		while ((str[i] >= 32 && str[i] <= 126))
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
	char chaine[10] = " ";

	printf(" %d ", ft_str_is_printable(chaine));
	return (0);
}
