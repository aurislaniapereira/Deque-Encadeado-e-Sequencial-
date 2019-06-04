/* Nome: Aurislânia Pereira Batista
   Matrícula: 398330
*/
#include <iostream>
#include "DequeSequencial.h"
using namespace std;

/**
Construtor que é chamado quando o deque é criado.
Quando o construtor é criado, as variáveis ini e fim recebem 0, bem como a cabeça e a cauda. O tamanho
recebe 0 também, e o maxtam recebe o n (valor máximo que o vetor terá, valor esse que o usuário digita
na inicialização do programa). 
 */
DequeSequencial :: DequeSequencial (int n) {
    v = new (std:: nothrow) int[n];
    tam = 0;
    maxtam = n;
    ini = 0;
    fim = 0;
    head = 0; 
    tail = 0; 
}

/*
Função que destroi o deque construído após o usuário terminar as operações e não for mais utilizar o 
programa.
 */
void DequeSequencial :: destruir_deque () {
    for (int i = ini; i < fim; i++){
        v[i] = 0;
    }
    ini = 0;
    fim = 0;
    tam = 0;
    maxtam = 0;
}


/*
Função que verifica se o deque está vazio e retorna a resposta ao usuário 
 */
void DequeSequencial :: cheia(){
    if(tam == maxtam){
        cout << "\nDeque cheio!!";
    }
    cout << "\nDeque não está cheio ainda!!!";
}

/*
Função que mostra normalmente (do primeiro até o ultimo) todos os elementos contidos no deque
 */
void DequeSequencial :: print(){
    for (int i = ini; i < fim; i++){
        cout << "|" << v[i] << "|";
    }
}

/*
Função que adiciona um elemento no final do deque
 */
void DequeSequencial :: inserirFim(int valor){
    if(tam == maxtam){
        cout << "\nDeque cheio!!";
    }else{
        if(ini == 0 && fim == 0){
            head = valor;
        }
        v[fim] = valor;
        tam++;
        fim++;
        tail = valor;
        cout << ":: Elemento inserido com sucesso!!";
    }
}

/*
Função que adiciona um elemento no início do deque
 */
void DequeSequencial :: inserirIni(int valor){ 
    if(tam == maxtam){
        cout << "\nDeque cheio!!";
    }else{
        if(ini == 0 && fim == 0){
            tail = valor;
        }
        ini--;
        v[ini] = valor;
        tam++;
        head = valor;
        cout << ":: Elemento inserido com sucesso!!";
    }
}

/*
Função que remove um elemento do final do deque
 */
void DequeSequencial :: removerFim(){ //ok
    if (tam == 0) {
        cout << "\nErro : Deque vazio." << endl;
    }else{
        tam--;
        fim--;
        tail = v[fim-1];
        cout << "\nElemento removido";
        if(fim == 0 && ini == 0) tail = head = 0; //NULL
        if(fim == 0 && ini == -1) tail = head;
        if(fim == 0 && ini < -1) tail = v[fim-1];
    }
}
/*
Função que remove um elemento do início do deque
 */
void DequeSequencial :: removerIni(){ //erro
    if (tam == 0) {
        cout << "\nErro : fila vazia." << endl;
    }else{
        // retira elemento do início
        ini++;
        tam--;
        head = v[ini];
        cout << "\nElemento removido";
        if(fim == 0 && ini == 0) head = tail = 0; //NULL
        if(fim == 1 && ini == 0) head = tail;
        if(fim > 1 && ini == 0) head = v[ini];
    }
}

/*
Função que mostra todos os nós contidos no deque de forma reversa (do ultimo para o primeiro)
 */
void DequeSequencial :: printReverso(){
    for (int i = fim-1; i >= ini ; i--){
        cout << "|" << v[i] << "|";
    }

}

/*
Função que verifica a cabeça do deque e a retorna ao usuário 
 */
void DequeSequencial :: cabeca () {
    if (head != 0){
        cout << "Head : " << head << "\n";    
    }else{
        cout << "\nErro: impossível acessar cabeça\n";
    }
}

/*
Função que verifica a tail (cauda) do deque e a retorna ao usuário 
 */
void DequeSequencial :: cauda () {
    if(tail != 0){
        cout << "Tail : " << tail << "\n";
    }else{
        cout << "\nErro: impossível acessar cauda\n";
    }
}

/*
Função que verifica se inicio e fim estão zerados, se estiverem, a cabeça e a cauda também são zerados
pois significa que o deque está vazio. 
*/
void DequeSequencial :: verificar_head_tail(){
    if(ini == 0 && fim == 0 ){
        head = 0;
        tail = 0;
    }
}

void DequeSequencial::estaVazio(){
    if (tam == 0){
        cout << "Deque vazio!";
    } else {
        cout << "Deque não está vazio!";
    }
}





