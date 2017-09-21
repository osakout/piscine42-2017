/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 13:51:48 by osakout           #+#    #+#             */
/*   Updated: 2017/09/11 15:45:31 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int a;

	a = 0;
	if (nb < 0)
		return (0);	
	while (nb > 0)
	{
		a++;
		if (nb == a * a)
			return(a);
		else if(a == nb)
			return(0);
	}
	return(0);
}

int main()
{
	printf(" %d ", ft_sqrt(-52));
	return 0;
}
