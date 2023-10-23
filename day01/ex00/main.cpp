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

  
    Worker* worker = new Worker(10, 100, 1, 1000, 11);
    Worker* worker2 = new Worker(20, 200, 2, 2000, 22);
    Worker* worker3 = new Worker(30, 300, 3, 3000, 33);
    Worker* worker4 = new Worker(40, 300, 4, 4000, 44);

    // Atribui o Shovel ao Worker
    worker->assignTool(hammer);
    worker->assignTool(shovel);
    worker->assignTool(shovel3);

    worker->assignTool(shovel2);
    worker->assignTool(hammer2);
    worker->assignTool(hammer3);
    worker->assignTool(hammer4);
    //worker->assignTool(shovel3);

    worker3->assignTool(shovel4);
    worker4->assignTool(shovel4);

  
    //worker->retrieveTool(hammer);
    //worker->retrieveTool(shovel3);

   // worker2->assignTool(hammer);
   // worker2->assignTool(shovel3);

     

    //worker2->assignTool(shovel);
    std::cout << "Worker Information (before to use Tool):" << std::endl;
    worker->displayInfo();

    worker->useTools();
   
   std::cout << "Worker Information (after to use Tool):" << std::endl;
    worker->displayInfo();
    

    // O Worker usa as Tools
    worker->useTools();
   // worker->retrieveTool();

    // Exibe informações após o uso

    worker->displayInfo();
    
    
    worker2->assignTool(shovel);
    worker2->assignTool(hammer);
    worker2->useTools();


    worker2->displayInfo();

    worker->displayInfo();
    


    // O Worker é destruído, mas a Shovel não deve ser destruída

    //delete worker;

    // Verifica se o Shovel ainda está na memória
    if (shovel != NULL) {
        std::cout << "The Shovel still in memory." << std::endl;
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
