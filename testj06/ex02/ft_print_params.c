/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 15:07:10 by osakout           #+#    #+#             */
/*   Updated: 2017/09/19 15:10:00 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int a;
	int b;

	a = 1;
	b = 0;
	while (a < argc)
	{
		while (argv[a][b])
		{
			ft_putchar(argv[a][b]);
			b++;
		}
		ft_putchar('\n');
		b = 0;
		a++;
	}
	return (0);
}
