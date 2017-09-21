/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 10:40:12 by osakout           #+#    #+#             */
/*   Updated: 2017/09/11 13:51:01 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index == 0)
		return(0);
	else if (index < 0)
		return(-1);
	else if (index == 1)
		return (1);
	else
		return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int	main()
{
	printf(" %d ", ft_fibonacci(15));
	return(0);
}
