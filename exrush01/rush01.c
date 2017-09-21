/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osakout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 10:58:55 by osakout           #+#    #+#             */
/*   Updated: 2017/09/02 19:02:23 by osakout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c); //appel du prototype de la fonction ft_putchar

int	rush2(int x)	//fonction qui affiche la premiere ligne => /***\
{
	int count_line;		//on declare une variable qui va compter le nombre de caractere

	count_line = 1;		//on initialise la variable a '1'
	while (count_line <= x)		//tant que la variable est inferieur ou egale a x
	{
		if (count_line == 1)		//si count_line est egale a 1
			ft_putchar(47);			//alors afficher un '/'
		else if (count_line == x)	//sinon si count_line est egale a x
		{
			ft_putchar(92);			//alors afficher '\' 
			ft_putchar('\n');		// et faire un retour a la ligne
		}
		else
			ft_putchar(42);			//SINON affiche '*'
		count_line++;			//count_line++ est lequivalent de count_line = count_line +1
	}
	return (0);
}

int	rush3(int x)	//fontion qui affiche la derniere ligne => \***/ 
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

int	rush4(int x)	//fonction qui affiche les lignes du milieu => *   *
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

int	rush(int x, int y)	//fonction principal du rush	(fonction du prototype dans le main.c)
{
	if (x <= 0 || y <= 0)	//si x ou y vaut 0, terminer le programme et affiche rien
		return (0);
	rush2(x);			//appel la fonction rush2 et affiche la premiere ligne
	if (y == 1)			//si y vaut "1" on arrrete le programme car on affiche que 1 seul ligne
		return (0);		
	if (y == 2)			//si y vaut "2" on appel la fonction rush3 qui affiche la derniere ligne  
	{
		rush3(x);
		return (0);
	}
	while (y > 2)		//tant que y > 2 on appel la fonction rush4 qui affiche les lignes du centre donc => *   *
	{
		rush4(x);
		ft_putchar('\n');
		y--;			// y--  est lequivalent de  y = y - 1  
	}
	rush3(x);			//affiche la derniere ligne
	return (0);
}
