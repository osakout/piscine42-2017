/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 15:25:30 by osakout           #+#    #+#             */
/*   Updated: 2017/09/10 16:33:10 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int resu;

	resu = nb;
	if (power == 0)
	{
		resu = 1;
		return (resu);
	}
	if (power < 0)
	{
		resu = 0;
		return (resu);
	}
	while (power - 1 > 0)
	{
		resu = resu * nb;
		power--;
	}
	return (resu);
}

int	main(void)
{
	printf("%d",ft_iterative_power(5, 1));
	return (0);
}
