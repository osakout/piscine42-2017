/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 20:10:30 by osakout           #+#    #+#             */
/*   Updated: 2017/09/12 20:23:10 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (s1[n - 1] > s2[n - 1])
		return (1);
	if (s1[n - 1] < s2[n - 1])
		return (-1);
	if (s1[n - 1] == s2[n - 1])
		return (0);
	return (0);
}

int	main()
{
	//printf("%d", strncmp("zazzzzz", "zzbcfd", 2));
	printf("%d", ft_strncmp("zazzzzz", "zzbcfd", 2));
	return (0);
}
