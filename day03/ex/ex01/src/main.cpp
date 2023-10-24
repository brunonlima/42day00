#include <iostream>
#include <vector>
#include "Command.hpp"
#include "TuesdayDiscountCommand.hpp"
#include "PackageReductionDiscountCommand.hpp"

int main() {
    Command* order1 = new TuesdayDiscountCommand(1, "Tuesday", "Client1");
    order1->add_article("Item1", 1);
    //order1->add_article("Item2", 2);

    //Command* order2 = new TuesdayDiscountCommand(2, "Monday", "Client2");
    //order2->add_article("Item3", 5);

    Command* order2 = new PackageReductionDiscountCommand(3, "Wednesday", "Client2");
    order2->add_article("Item1", 20);
    //order2->add_article("Item5", 4);

    //Command* order4 = new PackageReductionDiscountCommand(4, "Thursday", "Client4");
    //order4->add_article("Item6", 1);

    std::vector<Command*> orders;
    orders.push_back(order1);
    orders.push_back(order2);
  //  orders.push_back(order3);
  //  orders.push_back(order4);

    double total_discounted_price = 0;

    for (std::vector<Command*>::iterator it = orders.begin(); it != orders.end(); ++it) {
        total_discounted_price += (*it)->get_total_price();
        
    }

    std::cout << "Total discounted price: " << total_discounted_price << " euros" << std::endl;


    return 0;
}
