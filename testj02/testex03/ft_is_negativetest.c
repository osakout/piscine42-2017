/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negativetest.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 11:50:14 by osakout           #+#    #+#             */
/*   Updated: 2017/09/03 12:22:12 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);
void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	int i;

	i = 0;
	if (n >= i)
		ft_putchar('P');
	if (n < i)
		ft_putchar('N');
}
