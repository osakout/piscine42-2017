/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 11:36:25 by osakout           #+#    #+#             */
/*   Updated: 2017/09/13 14:16:34 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		while ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			i++;
			if (str[i] == '\0')
				return (1);
		}
		return(0);
	}
	return (1);
}

int	main()
{
	char chaine[23] = " q";

	printf(" %d ",ft_str_is_alpha(chaine));
	return (0);
}

