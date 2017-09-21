/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 19:06:51 by osakout           #+#    #+#             */
/*   Updated: 2017/09/11 10:37:34 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_recursive_factorial(int nb)
{
	int i;

	i = nb - 1;
	if (nb < 0 || nb > 12)
	{
		nb = 0;
		return (nb);
	}
	while (i > 0)
	{
		nb = nb * i;
		i--;
		ft_recursive_factorial(i);
	}
	return(nb);
}

int	main()
{
	printf("%d",ft_recursive_factorial(5));
	return (0);
}
