/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomes-t <bgomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 04:02:28 by bgomes-t          #+#    #+#             */
/*   Updated: 2022/04/23 07:28:21 by bgomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>
int    main()
{
    int a = 10;
    int b = 5;
    int div = 0;
    int mod = 0;
    
    printf("Valor de a: %d\n" ,a);
    printf("Valor de b:%d\n" ,b);
    printf("Valor arbitrário div: %d\n" ,div);
    printf("Valor arbitrário do resto: %d\n" ,mod);
    ft_div_mod(a, b, &div, &mod);
    printf("\n Resultado Divisão:%d\n" ,div);
    printf("Resto: %d\n" ,mod);
}