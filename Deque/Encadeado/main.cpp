/* Nome: Aurislânia Pereira Batista
   Matrícula: 398330
*/
#include <iostream>
#include "DequeEncadeado.h"

void menu () {
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "Implementação do deque" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "OPÇÔES:" << std::endl;
    std::cout << "1. Inserir no início do deque" << std::endl;
    std::cout << "2. Inserir no final do deque" << std::endl;
    std::cout << "3. Remover no final do deque" << std::endl;
    std::cout << "4. Remover no inicio do deque" << std::endl;
    std::cout << "5. Printar normalmente" << std::endl;
    std::cout << "6. Printar reverso" << std::endl;
    std::cout << "7. Mostrar head" << std::endl;
    std::cout << "8. Mostrar tail" << std::endl;
    std::cout << "9. Está vazia? " << std::endl;
    std::cout << "10. Destruir Deque" << std::endl;
    std::cout << "11. Sair" << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << "Digite a sua opção: ";
}

int main () {
    DequeEncadeado d;


    while (true) {
        int opcao;
        menu();
        std::cin >> opcao;
        switch (opcao) {
            case 1: 
                int x;
                std::cout << "Digite um número: ";
                std::cin >> x;
                d.adicionar_elemento_ini(x);
                break;
            case 2: 
                int w;
                std::cout << "Digite um número: ";
                std::cin >> w;
                d.adicionar_elemento_fim(w);
                break;
            case 3: 
                int y;
                y = d.remover_elemento_fim();
                break;
            case 4: 
                int z;
                z = d.remover_elemento_ini();
                break;
            case 5: 
                std::cout << "---- Elementos da lista -----" << std::endl;
                d.print();
                break;
            case 6: 
                std::cout << "---- Elementos da lista reverso-----" << std::endl;
                d.printRever();
                break;
            case 7: 
                std::cout << "---- Mostrando a head-----" << std::endl;
                d.head();
                break;    
            case 8: 
                std::cout << "---- Mostrando tail-----" << std::endl;
                d.tail();
                break;    
            case 9: 
                std::cout << "---- Esta vazia-----" << std::endl;
                d.isEmpty();
                break;    
            case 10:
                std::cout << "-----Destruir Deque-----" << std::endl;
                d.destruirDeque();
                std::cout << "deque destruído" << std::endl;
                break;
            case 11:
                std::cout << "Saindo.................." << std::endl;
                exit(EXIT_SUCCESS);
            default:
                std::cout << ":> Opção inválida." << std::endl;
        }
    }

    return 0;
}
