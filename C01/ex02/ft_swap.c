/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomes-t <bgomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 02:33:13 by bgomes-t          #+#    #+#             */
/*   Updated: 2022/04/19 00:38:26 by bgomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	x;
	int	y;

		y = *b;
		x = *a;
		*b = x;
		*a = y;
}

#include <stdio.h>
int main()
{
    int x = 50;
    int y = 104;

    printf("X antes: %d\n", x);
    printf("Y antes: %d\n", y);
    ft_swap(&x, &y);
    printf("\nX depois: %d\n", x);
    printf("Y depois: %d\n", y);
}
