/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 11:16:38 by osakout           #+#    #+#             */
/*   Updated: 2017/09/07 11:36:59 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
void ft_putstr(char *str)
{
	char *xtr;

	while (str[0] != '\0')
	{
		ft_putchar(*str);
		xtr = &str[0 + 1];
		str = xtr;
	}
}

int main ()
{
	char *chai_c;
	chai_c = "zebi";
	ft_putstr(chai_c);
	return (0);
}
