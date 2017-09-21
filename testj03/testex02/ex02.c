/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 11:44:45 by osakout           #+#    #+#             */
/*   Updated: 2017/09/06 15:18:00 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void fct(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

int	main()
{
	int a;
	int b;
	
	a = 123;
	b = 321;
	printf(" a = %d \n b = %d \n", a, b);
	fct(&a, &b);
	printf(" a = %d \n b = %d \n", a, b);
	return(0);
}
