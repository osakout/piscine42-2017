/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 13:25:48 by osakout           #+#    #+#             */
/*   Updated: 2017/09/12 14:03:49 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char dest[8] = "polertk";
	char cp[8] = "abcd";

	printf(" cp = %s", cp);
	strcpy(cp, dest);
	printf(" cp = %s", cp);
	//printf(" dest = %s",ft_strcpy(dest, "salut"));
	return(0);
}
