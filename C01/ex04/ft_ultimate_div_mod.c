/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomes-t <bgomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 04:58:31 by bgomes-t          #+#    #+#             */
/*   Updated: 2022/04/23 07:28:07 by bgomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

#include <stdio.h>
int main()
{
    int a = 50;
    int b = 5;
    
    ft_ultimate_div_mod(&a, &b);
    printf("Resultado da divisão: %d\n", a);
    printf("Resto: %d\n", b);
}
