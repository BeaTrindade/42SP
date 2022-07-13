/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomes-t <bgomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 05:21:31 by bgomes-t          #+#    #+#             */
/*   Updated: 2022/04/20 16:09:38 by bgomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			&& (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
			&& (!(str[i - 1] >= '0' && str[i - 1] <= '9')))
		str[i] = str[i] - 32;
		
		if ((str[i] >= 'A' && str[i] <= 'Z')
			&& ((str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			&& ((str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
			&& ((str[i - 1] >= '0' && str[i - 1] <= '9'))
		str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

#include <stdio.h>

int main (void) 
{
    char name[] = "oi beAH, tudo bem?";

    ft_strcapitalize(name);
    printf("%s", name);
    return (0);
}
