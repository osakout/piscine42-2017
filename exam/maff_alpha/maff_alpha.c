/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 15:56:04 by osakout           #+#    #+#             */
/*   Updated: 2017/09/08 16:40:53 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	maff_alpha(char c)
{
	while (c == 'y')
	{
		ft_putchar(c);
		c++;
		ft_putchar(c - 32);
	}
	return (0);
}

int	main()
{
	char a;

	a = 'a';
	maff_alpha(a);
	return (0);
}
