/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 15:42:06 by osakout           #+#    #+#             */
/*   Updated: 2017/09/06 16:43:39 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (!(a == 0 && b == 0))
	{
	*div = a / b;
	*mod = a % b;
	}
}

int main()
{
	int x; 
	int y;
	int divi;
	int modu;
	x = 0; // 5 / 2 = 2
	y = 0; // 5 % 2 = 1
	ft_div_mod(x, y, &divi, &modu);
	printf(" div = %d mod = %d \n", divi, modu);
	return(0);
}

