/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 18:06:55 by osakout           #+#    #+#             */
/*   Updated: 2017/09/03 20:39:56 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int ft_print()
{
	int c1, c2, c3;
		
	c1 = 0; //48=0
	 
	while(c1 <= c3) //56=8
		{
			c2 =c1 + 1; 
			while(c2 <= c3) //57=9
				{
					c3= c2 + 1;
					while (c3 <= 9)
					{
						printf("%d%d%d,", c1, c2, c3);
						c3++;
					}
					c2++;
				}
			c1++;
		}
	ft_putchar('\n');
	return 0;
}

int main()
{
	ft_print();
	return (0);
}
