/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomes-t <bgomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:15:17 by bgomes-t          #+#    #+#             */
/*   Updated: 2022/04/23 07:30:44 by bgomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int	alfabeto;

	alfabeto = 'a';
	while (alfabeto <= 'd')
	{
		ft_putchar(alfabeto);
		alfabeto++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}