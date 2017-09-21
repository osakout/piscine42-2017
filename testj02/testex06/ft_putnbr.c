/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 11:57:42 by osakout           #+#    #+#             */
/*   Updated: 2017/09/07 16:59:36 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	/*if (nb < 10)
	{
		ft_putchar(nb + '0');
		ft_putchar('\n');
	}
	else if (nb > 10 && nb < 100)
	{
		ft_putchar((nb / 10) + '0');
		ft_putchar((nb % 10) + '0');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar((nb / 100) + '0');
		ft_putchar(((nb % 100) / 10) + '0');
		ft_putchar((nb % 10) + '0');
		ft_putchar('\n');
	}*/
	if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
		//ft_putnbr(nb / 10);
	}
} 

int main()
{
	ft_putnbr(5);
	return(0);
}
