/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomes-t <bgomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 20:07:13 by bgomes-t          #+#    #+#             */
/*   Updated: 2022/04/23 07:27:55 by bgomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (*(str + x) != '\0')
	{
		ft_putchar(*(str + x));
		x++;
	}
}

int        main(void)
{
    char string[] = "laranja";
    char *ptr = &string[0];
    
    ft_putstr(ptr);
}
