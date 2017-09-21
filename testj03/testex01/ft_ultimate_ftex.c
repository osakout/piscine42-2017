/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ftex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 17:28:10 by osakout           #+#    #+#             */
/*   Updated: 2017/09/07 17:08:09 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void main(int *********nbr)
{
	int a;
	int *nbr1;
	int **nbr2;
	int ***nbr3;
	int ****nbr4;
	int *****nbr5;
	int ******nbr6;
	int *******nbr7;
	int ********nbr8;

	nbr1 = &a;
	nrb2 = nrb1;
	nrb3 = nbr2;
	nbr4 = nbr3;
	nbr5 = nbr4;
	nrb6 = nrb5;
	nrb7 = nbr6;
	nbr8 = nbr7;
	nbr = nbr8;
	nbr = 42;

	printf("%d ", *********nbr);
}
