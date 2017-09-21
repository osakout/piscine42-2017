/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 18:23:28 by osakout           #+#    #+#             */
/*   Updated: 2017/09/06 18:35:01 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{ 
	int n;

	n = *a;
	*a = *a / *b;
	*b = n % *b;
}

int main()
{
	int a;
	int b;

	a = 19;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf(" a = %d \n b = %d ", a, b);
	return (0);
}
