/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 19:37:53 by osakout           #+#    #+#             */
/*   Updated: 2017/09/12 12:23:17 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

/*int	ft_atoi(char *str)
{
	int i;
	char *ptr;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] > 47 && str[i] < 58)
		{
			ptr = &str[i];
			i++;
			return(*ptr - 48);
		}
		if (str[i] > 57 && str[i] < 127)
		{
			return (0);
		}
		i++;
	}
	return(0);
}
*/
int	main()
{
	//printf(" %d ", ft_atoi(" a145q2salut1"));
	printf(" %d ", atoi("/145abcd123"));
	return(0);
}
