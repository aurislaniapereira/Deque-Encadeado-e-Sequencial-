/* Nome: Aurislânia Pereira Batista
   Matrícula: 398330
*/
#ifndef DEQUE_ENCADEADO_H
#define DEQUE_ENCADEAD0_H
#include <iostream>

/**
 Definição do nó da lista.
 */
struct No {
    int dado;
    struct No *prox;
};

/** 
 Aqui, definimos um novo tipo chamado p_no 
 que é um ponteiro para struct No
 */
typedef struct No* p_no; 

/**
 Definição da classe DequeEncadeado.
 Essa classe tem dois campos, um chamado 'ini'  e outro chamado 'fim' que 
 são campos do tipo 'p_no', ou seja, um ponteiro para um 'struct No'
 O campo ini aponta para o primeiro nó da lista.
 O campo fim aponta para o ultimo nó da lista.
 A classe também contém as funções que são utilizadas no deque.
 */
class DequeEncadeado {
    private:
        No* ini; //aponta para o nó inserido no início do deque
        No* fim; //aponta para o ultimo nó que foi inserido no final do deque
    
    public:
        DequeEncadeado ();
        void print ();
        void printReverso(p_no);
        void printRever();
        void adicionar_elemento_fim (int);
        void adicionar_elemento_ini (int);
        int remover_elemento_fim ();
        int remover_elemento_ini ();
        void isEmpty();
        void head();
        void tail();
        void destruir_deque_rec (p_no);
        void destruirDeque();
};

#endif
