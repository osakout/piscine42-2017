/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 10:23:14 by osakout           #+#    #+#             */
/*   Updated: 2017/09/08 13:31:24 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void	ft_print_combn(int n)
{
	int tab[n];
	
	tab[0] = 0;
	//ft_print_combn(n + 1);
	ft_putchar(tab[0] + '0');
	ft_print_combn(n + 1);
}

int main()
{
	ft_print_combn(2);
	return 0;
}
