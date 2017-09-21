/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 15:40:22 by osakout           #+#    #+#             */
/*   Updated: 2017/09/01 16:41:13 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1); 					// 1 => entree standard | &c, 1 => libere un adressage de bit dans la memoire pour 1 caractere 
	return(0);
}

int ft_print_alphabet(char a, int z)
{
	
	while( a <= z)						// a => premiere lettre de commencement de la serie | z => derniere lettre ou le programme doit arreter +1 
		{
			ft_putchar(a);				// affiche lettre par lettre
			a++;						// incremente 'a' => equivalent > a = a + 1 (pour passer a la lettre superieur)
		}
	return(0);
}

int main()
{
	ft_print_alphabet(97,122);			// 97 cest 'a' en code ASCII | 122 cest z en code ASCII
	ft_putchar('\n');
	return(0);
}

