/* ************************************************************************** */
/*                                                                            */
/*                                                        :::o      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 18:39:39 by osakout           #+#    #+#             */
/*   Updated: 2017/09/07 11:14:35 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr()
{
	char *str;
	str = "salasda sd asd aa \n";
	char *xtr;
	
	ft_putchar(str[0]);
	while (str[0] != '\0')
	{
		xtr = &str[0 + 1];
		ft_putchar(*str);
		str = xtr;
	}
}

int main()
{
	ft_putstr();
	return (0);
}
