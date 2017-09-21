/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 10:58:55 by osakout           #+#    #+#             */
/*   Updated: 2017/09/02 17:20:47 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	rush2(int x)
{
	int count_line;

	count_line = 1;
	while (count_line <= x)
	{
		if (count_line == 1)
			ft_putchar(47);
		else if (count_line == x)
		{
			ft_putchar(92);
			ft_putchar('\n');
		}
		else
			ft_putchar(42);
		count_line++;
	}
	return (0);
}

int	rush3(int x)
{
	int count_line;

	count_line = 1;
	while (count_line <= x)
	{
		if (count_line == 1)
			ft_putchar(92);
		else if (count_line == x)
		{
			ft_putchar(47);
			ft_putchar('\n');
		}
		else
			ft_putchar(42);
		count_line++;
	}
	return (0);
}

int	rush4(int x)
{
	int count_line;

	count_line = 1;
	while (count_line <= x)
	{
		if (count_line == 1)
			ft_putchar(42);
		else if (count_line == x)
			ft_putchar(42);
		else
			ft_putchar(' ');
		count_line++;
	}
	return (0);
}

int	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return (0);
	rush2(x);
	if (y == 1)
		return (0);
	if (y == 2)
	{
		rush3(x);
		return (0);
	}
	while (y > 2)
	{
		rush4(x);
		ft_putchar('\n');
		y--;
	}
	rush3(x);
	return (0);
}
