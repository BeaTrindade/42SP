/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomes-t <bgomes-t@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 04:39:56 by bgomes-t          #+#    #+#             */
/*   Updated: 2022/04/22 05:22:54 by bgomes-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (str[x] != '\0')
	{
		while (str[x] == to_find[y] && to_find[y] != '\0' && str[x] != '\0')
		{
			x++;
			y++;
		}
		if (to_find[y] == '\0')
			return (str);
		str++;
	}
	return (0);
}
