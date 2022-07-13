/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomes-t <bgomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 04:42:42 by bgomes-t          #+#    #+#             */
/*   Updated: 2022/04/23 07:24:54 by bgomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		str[i] -= 32;
		i++;
	}
	return (str);
}

#include <stdio.h>

int main (void) 
{
    char name[] = "eu nao sou crazy;

    ft_strupcase(name);
    printf("%s", name);
    return (0);
}

