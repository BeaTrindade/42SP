//Para ver se tem um REPOSITORIO
comando:  git remote -

//CD .. /EX00 FACIL
Shell01/ex03 ❯ cd ../ex04

// Executar GCC
gcc -Wall -Wextra -Werror ft_teste.c && ./a.out

//Norminette em tempo real 'AO VIVO'
watch -n0 norminette "nome do arquivo"

//Norma
norminette ft_teste.c  -R CheckForbiddenSourceHeader
//ou
norminette

//Norminette e Copilar
cd ex00
norminette -R CheckForbidenSourceHeader *.c
gcc -Wall -Wextra -Werror *.c && ./a.out
ls -la
cd ..

//Biblioteca
#include <unistd.h>

//Variaveis
char c; char beah;  //<Declarei uma variavel

//funcao
void executar()
{
	write(1, &c, 1)    write(1,&beah, 1)
}

void correto(char helio)  //<Declarei uma nova variavel, mas não executa, pois nao declarei dentro do  void
{
	write(1, &helio, 1)
}
//Montar o programa
int main()      <//Main da o START
{
	c ou beah = 'j';        < Parametro    //<Dentro da função atribui que C é J
	executar(c);                          //Terminar um comando: "" ; ""
	correto('\n');                       //('\n') Quebra de Linha
	return (0);
}
