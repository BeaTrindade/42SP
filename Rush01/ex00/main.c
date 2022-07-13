/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahenriq <mahenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:10:30 by mahenriq          #+#    #+#             */
/*   Updated: 2022/04/17 20:44:36 by mahenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int print_table(int table[4][4]);
// int char2int(char **array);
int solve(char **argv);
	
int main(int argc, char **argv)
{
	int table[4][4];

	solve(argv);
	
	// print_table(table);
	return 0;

	
}

int print_table(int table[4][4])
{
	char temp;

	int i = -1;
	while (++i < 4)
	{
		int j = -1;
		while (++j < 4)
		{
			temp = table[i][j] + '0';
			write(1, &temp, 1);
			if (j != 4)
			{
				write(1, " ", 1);
			}
		}

		write (1, "\n", 1);
	}
}

int solve(char **argv)
{
	// int i = 1;
	// while (*argv[i] != '\0'){
	// 	printf("%s", argv[i]);
	// 	i++;
	// }

	printf("%d", *argv[1]);
	return 0;
}






// int char2int(char **array)
// {
// 	int res[16];
// 	int i = 1;
// 	int ir = 0;
// 	while (*array[i] != '\0')
// 	{
// 		res[ir] = *array[i] - '0';
// 		i++;
// 		ir++;
// 	}
// 	return (*res);
// }






