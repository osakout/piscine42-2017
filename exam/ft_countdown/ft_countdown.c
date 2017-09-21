/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 15:33:31 by osakout           #+#    #+#             */
/*   Updated: 2017/09/08 15:45:40 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	ft_countdown(void)
{
	int c;

	c = 9;
	while (c != 0)
	{
		ft_putchar(c + '0');
		c--;
	}
	ft_putchar(c + '0');
	return (0);
}

int	main(void)
{
	ft_countdown();
	ft_putchar('\n');
	return (0);
}
