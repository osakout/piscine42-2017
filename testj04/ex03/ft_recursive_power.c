/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 16:34:05 by osakout           #+#    #+#             */
/*   Updated: 2017/09/11 10:38:36 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int resu;

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
	resu = nb * ft_recursive_power(nb, power - 1);
	return (resu);
}

int	main(void)
{
	printf("%d", ft_recursive_power(2, 6));
	return (0);
}
	
