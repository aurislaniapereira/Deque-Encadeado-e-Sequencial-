/* Nome: Aurislânia Pereira Batista
   Matrícula: 398330
*/
#include <iostream>
#include "DequeEncadeado.h"
using namespace std;

/**
Método construtor que é chamado quando o deque é criado.
Quando o deque é criado não existem nós, então os ponteiros ini e fim apontam para NULL
 */
DequeEncadeado::DequeEncadeado () { 
    ini = fim = NULL; 
}

/*
Função que mostra normalmente (do primeiro até o ultimo) todos os nós contidos no deque
 */
void DequeEncadeado::print(){
    p_no atual;
    atual = ini;
    while(atual != NULL){
        cout << atual-> dado << " ";
        atual = atual->prox;
    }
}

/*
Função que mostra todos os nós contidos no deque de forma reversa (do ultimo para o primeiro)
 */
void DequeEncadeado::printReverso(p_no node){
    if (node == NULL){
        return;
    }
    printReverso(node->prox);
    cout << node->dado << " ";
}

void DequeEncadeado::printRever(){
    printReverso(ini);
}


/*
Função que adiciona um elemento no início do deque
 */
void DequeEncadeado::adicionar_elemento_fim (int valor) {
    p_no novo;
    novo = new (std::nothrow) No;
    novo->dado = valor;
    novo->prox = fim->prox;
    if(fim != NULL){
        fim->prox = novo;
        fim = novo;
    } else {
        ini = novo;
        fim = novo;
    }

    cout << "elemento inserido com sucesso!!";
}

/*
Função que adiciona um elemento no final do deque
 */
void DequeEncadeado::adicionar_elemento_ini(int valor){
    p_no novo;
    novo = new (std::nothrow) No;
    novo->dado = valor;
    if (ini == NULL){
        novo->prox = ini;
        ini = novo;
        fim = novo;
    } else {
        novo->prox = ini;
        ini = novo;
    }

    cout << "elemento inserido com sucesso!!";
}

/*
Função que remove um elemento do início do deque
 */
int DequeEncadeado::remover_elemento_ini () {
    if (ini == NULL && fim == NULL){
        cout << "erro:: Deque vazio!!";
    }
    p_no aux;
    int v;
    aux = ini;
    v = aux->dado;
    ini = ini->prox;
    if(ini == NULL){
        fim = NULL;
    }
    delete aux;
    return v;
    cout << "elemento removido com sucesso!!";
}

/*
Função que remove um elemento do final do deque
 */
int DequeEncadeado::remover_elemento_fim () {
    if (ini == NULL && fim == NULL){
        cout << "erro:: Deque vazio!!";
    }
    p_no atual, ant;
    atual = ant = ini;
    int v;
    while(atual != NULL){
        if (atual == fim){
            p_no aux;
            aux = fim;
            v = atual->dado;
            if (ant->prox == NULL){
                ini = fim = NULL;
            } else {
                ant->prox = atual->prox;
                fim = ant;
            }
            delete aux;
            return v;
        } else {
            ant = atual;
            atual = atual->prox;
        }
    }
    cout << "elemento removido com sucesso!!";
}

/*
Função que verifica se o deque está vazio e retorna a resposta ao usuário 
 */
void DequeEncadeado::isEmpty(){
    if (ini == NULL && fim == NULL){
        cout << "Deque está vazio!!";
    } else {
        cout << "Deque não está vazio!";
    }
}

/*
Função que verifica a cabeça do deque e a retorna ao usuário 
 */
void DequeEncadeado::head(){
    if(ini == NULL && fim == NULL){
        cout << "erro:: Deque vazio";
    } else {
        cout << ini->dado;
    }
}

/*
Função que verifica a tail (cauda) do deque e a retorna ao usuário 
 */
void DequeEncadeado::tail(){
    if(ini == NULL && fim == NULL){
        cout << "erro:: Deque vazio";
    } else {
        cout << fim->dado;
    }
}

/*
Função que destroi o deque quando o usuário não quiser mais continuar nenhuma operação
*/
void DequeEncadeado::destruir_deque_rec (p_no node) {
    if (node != NULL) {
    destruir_deque_rec (node -> prox);
    delete node;
    }
}

void DequeEncadeado::destruirDeque(){
    destruir_deque_rec (ini);
    ini = NULL;
    fim = NULL;
}
