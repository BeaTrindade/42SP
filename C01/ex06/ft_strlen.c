/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomes-t <bgomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 05:59:53 by bgomes-t          #+#    #+#             */
/*   Updated: 2022/04/18 20:11:36 by bgomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

//void	ft_putchar(char c)
//{
//	write(1, &c, 1);
//}

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (*(str + x) != '\0')
	{
		//ft_putchar(*(str + x));
		x = x + 1;
	}
	return (x);
}

//#include <stdio.h>
int        main(void)
{
    char    string[] = "biscoito";
    char    *ptr = &string[0];
    int    x;
    
    x = ft_strlen(ptr);
    printf	(": %d\n", x);
}
