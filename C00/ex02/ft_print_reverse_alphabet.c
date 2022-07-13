/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomes-t <bgomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 19:33:48 by bgomes-t          #+#    #+#             */
/*   Updated: 2022/04/23 07:30:26 by bgomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int	revolta;

	revolta = 'z';
	while (revolta >= 'a')
	{
		ft_putchar(revolta);
		revolta--;
	}
}

int main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}