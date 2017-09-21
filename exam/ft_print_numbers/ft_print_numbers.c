/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 15:46:48 by osakout           #+#    #+#             */
/*   Updated: 2017/09/08 15:54:18 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		ft_putchar(n + '0');
		n++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
