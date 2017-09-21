/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_combex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 10:25:52 by osakout           #+#    #+#             */
/*   Updated: 2017/09/04 12:21:00 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_c(int c1)
{
	if (c1 != 55)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int c1;
	int	c2;
	int	c3;

	c1 = 48;
	while (c1 <= 55)
	{
		c2 = c1 + 1;
		while (c2 <= 56)
		{
			c3 = c2 + 1;
			while (c3 <= 57)
			{
				ft_putchar(c1);
				ft_putchar(c2);
				ft_putchar(c3);
				ft_print_c(c1);
				c3++;
			}
			c2++;
		}
		c1++;
	}
}
