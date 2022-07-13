/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomes-t <bgomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 05:15:37 by bgomes-t          #+#    #+#             */
/*   Updated: 2022/04/23 07:24:40 by bgomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		str[i] += 32;
		i++;
	}
	return (str);
}

#include <stdio.h>

int main (void) 
{
    char name[] = "NAO TEM BISCOITO";

    ft_strlowcase(name);
    printf("%s", name);
    return (0);
}