/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 10:38:46 by osakout           #+#    #+#             */
/*   Updated: 2017/09/16 14:19:05 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] >= 97 && str[i] <= 122)
		{
			if (!(str[i - 1] >= 97 && str[i - 1] <= 122 ) && !(str[i - 1] >= 48 && str[i - 1] <= 57) && !(str[i - 1] >= 65 && str[i - 1] <= 90))
			   str[i] = str[i] - 32;
			i++;
		}
		i++;
	}
	return(str);
}

int	main()
{
	char chaine[62] = "abc, edk/ e.de eadel; 65ds4 dede 54ded ed458";

	printf("%s", ft_strcapitalize(chaine));
	return (0);
}
