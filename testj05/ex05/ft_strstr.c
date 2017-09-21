/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 17:13:39 by osakout           #+#    #+#             */
/*   Updated: 2017/09/12 18:48:42 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (to_find[0] == str[i])
		{
			while (to_find[j] == str[i] && to_find[j] != '\0')
			{
				i++;
				j++;
			}
			if (str[i - 1] == to_find[j - 1] && to_find[j] == '\0')
				return(&str[i - j]);
		}
		i++;
	}
	return(0);
}

int	main()
{
	char str[51] = "je suis allez chez ta mere et jai enculer ta soeur";
	char to_find[11] = "allez chez";
	printf(" %s ", ft_strstr(str, to_find));
	return(0);
}
