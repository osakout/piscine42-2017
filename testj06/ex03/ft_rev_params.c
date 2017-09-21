/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 15:10:41 by osakout           #+#    #+#             */
/*   Updated: 2017/09/19 15:13:26 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int a;
	int b;

	a = argc - 1;
	b = 0;
	while (a > 0)
	{
		while (argv[a][b])
		{
			ft_putchar(argv[a][b]);
			b++;
		}
		ft_putchar('\n');
		b = 0;
		a--;
	}
	return (0);
}
