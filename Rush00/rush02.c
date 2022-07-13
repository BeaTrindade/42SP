/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomes-t <bgomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 22:49:16 by delais-v          #+#    #+#             */
/*   Updated: 2022/04/11 15:23:26 by bgomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y) // x=5   y=5
{
	int	alt;
	int	larg;

	alt = 1;
	while (alt <= y)
	{
		larg = 1;
		while (larg <= x)
		{
			if ((larg == 1 && alt == 1) || (larg == x && alt == y))
				ft_putchar('A');
			else if ((larg == x && alt == 1) || (larg == 1 && alt == y))
				ft_putchar('C');
			else if ((larg == 1) || (larg == x) || (alt == 1) || (alt == y))
				ft_putchar('B');
			else
				ft_putchar('-');
				ft_putchar('\n');
			larg++;
		}
		alt++;
			}
}
