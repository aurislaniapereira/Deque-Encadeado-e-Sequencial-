/* Nome: Aurislânia Pereira Batista
   Matrícula: 398330
*/
#include <iostream>
#include "DequeSequencial.h"
using namespace std;

void menu (){
   std::cout << "----------------------------------------------" << std::endl;
    std::cout << "Implementação do deque" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "OPÇÔES:" << std::endl;
    std::cout << "1. Inserir no final do deque" << std::endl;
    std::cout << "2. Inserir no inicio do deque" << std::endl;
    std::cout << "3. Remover no final do deque" << std::endl;
    std::cout << "4. Remover no inicio do deque" << std::endl;
    std::cout << "5. Printar normalmente" << std::endl;
    std::cout << "6. Printar reverso" << std::endl;
    std::cout << "7. Mostrar head" << std::endl;
    std::cout << "8. Mostrar tail" << std::endl;
    std::cout << "9. Está vazia? " << std::endl;
    std::cout << "10. Destruir deque" << std::endl;
    std::cout << "11. Sair" << std::endl;
    std::cout << "----------------------" << std::endl;
    std::cout << "Digite a sua opção: ";
}


int main (){
    int n;
    cout << "Digite o tamanho da lista : ";
    cin >> n;
    DequeSequencial d(n);

    while(true){
        int opcao;
        menu();
        cin >> opcao;
        switch (opcao){
            case 1:
                int x;
                cout << "Digite um número: ";
                cin >> x;
                d.inserirFim(x);
                cout << "\n" ;
                break;

            case 2:
                int y;
                cout << "Digite um número: ";
                cin >> y;
                d.inserirIni(y);
                cout << "\n" ;
                break;
            case 3:
                d.removerFim();
                cout << "\n" ;
                break;

            case 4:
                d.removerIni();
                cout << "\n" ;
                break;

            case 5: 
                cout << "---- Elementos da lista: ---- \n";
                d.print();
                cout << "\n" ;
                break;

            case 6:
                cout << "---- Elementos da lista reverso: ---- \n";
                d.printReverso();
                cout << "\n" ;
                break;  

            case 7:
                cout << "---- Cabeça da lista: ---- \n";
                d.verificar_head_tail();
                d.cabeca();
                break;
            case 8:
                cout << "---- Cauda da lista: ---- \n";
                d.verificar_head_tail();
                d.cauda();
                break;
            case 9:
               	cout << "---- Esta vazio---- \n";
                d.estaVazio();
                break;
            case 10:
                cout << "---- Destruir deque ---- \n";
                d.destruir_deque();
                cout << "Deque destruído!!";
                break;
            case 11:
                cout << "Saindo................";
                exit(EXIT_SUCCESS);    
            default:
                cout << "Opção inválida!";    
        }
    }

    return 0;
}
