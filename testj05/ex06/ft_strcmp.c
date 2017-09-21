/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 19:14:56 by osakout           #+#    #+#             */
/*   Updated: 2017/09/13 19:47:19 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	if (*s1 < *s2)
		return (-1);
	if (*s1 == *s2)
		return (0);	
	if (*s1 > *s2)
		return (1);
	return (0);
}

int	main()
{
	//printf("%d", ft_strcmp("gdiiiiiiiiiiiiib", "dzzza"));
	printf("%d", strcmp("gdiiiiiiiiiiiiib", "dzzza"));
	return 0;
}
