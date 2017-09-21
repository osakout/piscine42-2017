/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 13:40:33 by osakout           #+#    #+#             */
/*   Updated: 2017/09/08 15:37:46 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	aff_a(char *ptr)
{
	char a;

	a = 'a';
	if (*ptr < 1)
	{
		write(1, "a\n", 2);
		return (0);
	}
	while (ptr[0] != a && ptr[0] != '\0')
	{
		ptr++;
	}
	if (*ptr == a)
	{
		ft_putchar(*ptr);
		write(1, "\n", 1);
	}
	if (*ptr != a)
		write(1, "\n", 1);
	return (0);
}

int	main(void)
{
	aff_a("qweyuiqweyiu");
}
