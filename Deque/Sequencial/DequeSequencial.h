/* Nome: Aurislânia Pereira Batista
   Matrícula: 398330
*/
#ifndef DEQUESEQUENCIAL_H
#define DEQUESEQUENCIAL_H

/**
 Definição da classe DequeSequencial.
 Essa classe tem as variáveis ini e fim (que são as variáveis que guardam o primeiro e o ultimo elemento 
 do deque, respectivamente) e também as variáveis head e tail (que guardam o valor da acabeça e da cauda,
 respectivamente). Um tam que é o tamanho do vetor (atualizado de acordo com a inserção de valores), e 
 um maxtam que recebe n, ou seja, a capacidade total do deque. 
 A classe também contém as funções que são utilizadas no deque.
 */
class DequeSequencial{
    private:
        int *v;
        int tam;
        int maxtam;
        int ini;
        int fim;
        int head;
        int tail;

    public:
        DequeSequencial (int);
        void inserirFim(int);
        void inserirIni(int);
        void removerIni();
        void removerFim();
        void cheia();
        void print();
        void printReverso();
        void cabeca ();
        void cauda ();
        void verificar_head_tail();
        void estaVazio();
        void destruir_deque ();
};

#endif
