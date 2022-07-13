#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_putchar('b');
	ft_putchar('\n');
	return (0);
}

//Executar com: gcc -Wall -Wextra -Werror ft_teste.c && ./a.out
//Norma: norminette ft_teste.c  -R CheckForbiddenSourceHeader