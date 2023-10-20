#include <iostream>
#include "Worker.hpp"
#include "Shovel.hpp"
#include "Tool.hpp"
#include "Hammer.hpp"
#include <string>

//using namespace std; vou pensar se uso

int main() {
    
    Tool* shovel = new Shovel();
    Tool* hammer = new Hammer();

    shovel->setNumberOfUses(5);
    hammer->setNumberOfUses(5);

    // Cria um Worker
    Worker* worker = new Worker(10, 20, 30, 5, 100);
    Worker* worker2 = new Worker(40, 50, 80, 7, 200);

    // Atribui o Shovel ao Worker
    worker->assignTool(hammer);

    if (worker->getTool()->isBusy()) {
        std::cout << "Entrou no shovel está ocupado" << std::endl;
        worker->retrieveTool();
    } 

    worker2->assignTool(shovel);

    // Exibe informações iniciais
    std::cout << "Informações do Worker (antes de usar a Shovel):" << std::endl;
    worker->displayInfo();
    std::cout << "Número de usos da hammer: " << hammer->getNumberOfUses() << std::endl;

    // O Worker usa a Shovel
    worker2->getTool()->use();
   // worker->retrieveTool();

   std::cout << "Nome da Tool usada: " << worker2->getTool()->getName()<< std::endl;
   
    // Exibe informações após o uso
    std::cout << "\nInformações do Worker (depois de usar a Shovel):" << std::endl;
    worker->displayInfo();
    std::cout << "Número de usos restantes da Shovel: " << shovel->getNumberOfUses() << std::endl;
    
    worker2->assignTool(shovel);
    worker2->getTool()->use();

    std::cout << "\nInformações do Worker (depois de usar a Shovel):" << std::endl;
    worker2->displayInfo();
    std::cout << "Número de usos restantes da Shovel: " << shovel->getNumberOfUses() << std::endl;


    // O Worker é destruído, mas a Shovel não deve ser destruída

    //delete worker;

    // Verifica se o Shovel ainda está na memória
    if (shovel != NULL) {
        std::cout << "O Shovel ainda está na memória." << std::endl;
        delete shovel; // Libera a memória do Shovel, se necessário
    }

    
    // Verifica se o Shovel ainda está na memória
    if (worker->getTool() != NULL) {
        std::cout << "O Shovel do primeiro Worker está  na memória." << std::endl;
    
    }

     if (worker2->getTool() != NULL) {
        std::cout << "O Shovel do segundo Worker está  na memória." << std::endl;
    
    }
    
    delete worker2;
    delete worker;

    return 0;
}
