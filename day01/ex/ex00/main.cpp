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

    Tool* shovel2 = new Shovel();
    Tool* hammer2 = new Hammer();

    Tool* shovel3 = new Shovel();
    Tool* hammer3 = new Hammer();

    Tool* shovel4 = new Shovel();
    Tool* hammer4 = new Hammer();

    shovel->setNumberOfUses(10);
    hammer->setNumberOfUses(10);

    shovel2->setNumberOfUses(10);
    hammer2->setNumberOfUses(10);

    shovel3->setNumberOfUses(10);
    hammer3->setNumberOfUses(10);

    shovel4->setNumberOfUses(10);
    hammer4->setNumberOfUses(10);

  
    Worker* worker = new Worker(10, 100, 1, 1000, 11);
    Worker* worker2 = new Worker(20, 200, 2, 2000, 22);
    Worker* worker3 = new Worker(30, 300, 3, 3000, 33);
    Worker* worker4 = new Worker(40, 300, 4, 4000, 44);

    // Atribui o Shovel ao Worker
    worker->assignTool(hammer);
    worker->assignTool(shovel2);
    worker->assignTool(shovel3);

    worker->assignTool(shovel2);
    worker->assignTool(shovel3);

    worker3->assignTool(shovel3);
    worker4->assignTool(shovel4);

  
    worker->retrieveTool(worker2,hammer);
    worker->retrieveTool(worker2,shovel3);


     

    //worker2->assignTool(shovel);

    // Exibe informações iniciais
    std::cout << "Informações do Worker (antes de usar a Ferramenta):" << std::endl;
    worker->displayInfo();

    // O Worker usa a Shovel
    worker2->useTools();
   // worker->retrieveTool();

   // Include Worker header if you have a separate Worker class header

    // Exibe informações após o uso

    worker->displayInfo();
    
    
    worker2->assignTool(shovel);
    worker2->assignTool(hammer);
    worker2->useTools();


    worker2->displayInfo();
    


    // O Worker é destruído, mas a Shovel não deve ser destruída

    //delete worker;

    // Verifica se o Shovel ainda está na memória
    if (shovel != NULL) {
        std::cout << "O Shovel ainda está na memória." << std::endl;
        delete shovel; // Libera a memória do Shovel, se necessário
    }

    
    // Verifica se o Shovel ainda está na memória
   // if (worker->getTool() != NULL) {
    //    std::cout << "O Shovel do primeiro Worker está  na memória." << std::endl;
    
  //  }

//     if (worker2->getTool() != NULL) {
  //      std::cout << "O Shovel do segundo Worker está  na memória." << std::endl;
    
   // }
    

    Workshop* workshop = new Workshop() ;
    Workshop* workshop2 = new Workshop() ;


    worker->registerToWorkshop(workshop);
    worker2->registerToWorkshop(workshop);

    worker->registerToWorkshop(workshop2);
    workshop->executeWorkDay();

    worker->leaveWorkshop(workshop);

    workshop->executeWorkDay();
    workshop2->executeWorkDay();


    delete worker2;
    delete worker;
    delete hammer;

    return 0;
}
