/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2ex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 13:00:33 by osakout           #+#    #+#             */
/*   Updated: 2017/09/04 18:59:48 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}


void ft_print_2c(int c1, int c2, int c3, int c4)
{

	ft_putchar(c1);
	ft_putchar(c2);
	ft_putchar(' ');
	ft_putchar(c3);
	ft_putchar(c4);
	if (!(c1 == '9' && c2 == '8' && c3 == '9' && c4 == '9'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
}

void ft_print_2whil(int c1, int c2, int c3, int c4)
{
	c3 = c1;
	while (c3 <= '9')
	{
		c4 = c2 + 1;
		while (c4 <= '9')
		{
			ft_print_2c(c1, c2, c3, c4);
			c4++;
		}
		c3++;
		//c4 = c2 + 1;
	}
	//c4 = c2 + 1 ;
}


void ft_print_comb2(void)
{
	int c1;
	int c2;
	int c3;
	int c4;
	
	c1 = '0';
	while (c1 <= '9')
	{
		c2 = '0';;
		while (c2 <= '8')
		{
			ft_print_2whil(c1, c2, c3, c4);
			c2++;
			c3 = '0';
			c4 = c2 + 1;
		}
		c1++;
		c2 = '0';
	}
}

int main()
{
	ft_print_comb2();
	return (0);
}
