/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 17:01:37 by osakout           #+#    #+#             */
/*   Updated: 2017/09/07 17:28:22 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_ft(int *nbr)
{
	//int a;

	//nbr = &a;
	*nbr = 42;
	//printf("a = %d ", a);
	//ft_putchar('\n');
}

int main()
{
	int a;
	int *ptr;

	ptr = &a;
	ft_ft(ptr);
	printf(" a = %d ", a);
	return (0);
}
