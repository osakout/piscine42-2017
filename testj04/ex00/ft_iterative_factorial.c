/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 15:36:11 by osakout           #+#    #+#             */
/*   Updated: 2017/09/10 15:24:46 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	ft_putnbr(int nb)
{
	if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	return (0);
}

int	ft_iterative_factorial(int nb)
{
	int i;

	i = nb - 1;
	if (nb > 12)
	{
		nb = 0;
		return (nb);
	}
	while (i > 0)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}
int	main()
{
	ft_iterative_factorial(12);
	return (0);
}
