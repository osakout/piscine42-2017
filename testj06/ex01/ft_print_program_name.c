/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 15:04:21 by osakout           #+#    #+#             */
/*   Updated: 2017/09/19 15:06:28 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int a;

	a = 0;
	argc = 0;
	while (argv[0][a])
	{
		ft_putchar(argv[0][a]);
		a++;
	}
	ft_putchar('\n');
	return (0);
}
