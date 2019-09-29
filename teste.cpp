teoria 
1) lista, vector , array
2) a economia de atribuir variaveis num sistema, se tiver que criar 15 variáveis com a indexada apenas 1 com indice(1...a ..15)
3)indice
3)b)limitado
3)c)desconhecido  
4) iterar uma lista e tipo ele vai passar por todos os pontos da lista 1 por 1 
5) com um contador, Com a estrutura for-in,  Com um Enumerator
6) função são trechos de codigos que seram executados quando chamados são utilizadas para realizar 
diversas operações ou somente para exibir algum conteúdo tudo em c++ e uma função ate o int main como exemplo 
7)Funções são importantes porque elas retornam valores, ajudam a fragmentar o código em partes menores - mais fáceis de lidar - e 
ainda por cima podem ser utilizadas mais de uma vez no mesmo programa, poupando preciosos minutos de programação e inúmeras linhas de código
8)Para executar uma função, fazemos uma chamada de função, que é uma instrução composta pelo nome da função, seguido pela lista de argumentos entre parênteses
declarar: quando vc declara vc meio que esta declarando a variavel vc esta dando um objetivo ou um valor pra ela
9) Os parâmetros são as variáveis declaradas diretamente no cabeçalho da função.
10) retorno e quando acaba quando o programa pode parar de executar o codigo
11) sim o estudo dirigido 1, pois nos ajudaria a raciocinar mais e pensar na resposta , isso tbm ajudaria no nosso conhecimento teorico 

Algotitimos de Repetição 

1) 369 
2) 12345

Listas

1) 12345
2) 99
3)CuritibaMedianeiraFlorianopolisJoinvile

Pratica 

1) 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void NUMEROS (int i) {

do {

cout << i << "\n";

i++;

} while (i <= 100);

}

int main(){

NUMEROS (1);

return 0;
}

2)
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int a, b;

int SOMA (int a, int b) {

int res;

res = a + b;

cout << res;

}

int main(){

cin >> a;
cin >> b;

SOMA (a, b);


return 0;
}


