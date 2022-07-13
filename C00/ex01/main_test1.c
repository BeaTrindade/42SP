#include <unistd.h>

void	ft_putchar(char c)            <// Vai dar o retorno
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)    <// Criar uma Função Variavel vazia         "VOID = Vazio"
{
	int alfabeto                  <// Criar uma Variavel     "INT = Variavel que pega do numero INTeiro"
	
	alfabeto = 0;                 <// Atribuição para minha variavel INT
	while (alfabeto < 26)         <// Enquanto o alfabeto for menor que 26 (WHILE=Enquanto) 
{
	ft_putchar(alfabeto + 97)     <// alfabeto=0 + 97=A
	alfabeto++                    <// O alfabeto tinha o valor de '0' agora ele vale 1 (++ = 0, 1, ...) pois o codigo soma+1
}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}