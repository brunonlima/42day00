#include "TuesdayDiscountCommand.hpp"
#include <iostream>

TuesdayDiscountCommand::TuesdayDiscountCommand(int id, const std::string& date, const std::string& client) 
: Command(id, date, client), totalPrice(0.0) {}

double TuesdayDiscountCommand::get_total_price()  {
    this->totalPrice = Command::get_total_price();

    // Apply a 10% discount on Tuesdays (0.9)
    if (this->date == "Tuesday") {
        std::cout << "Command on Tuesday apply discount on: " << this->totalPrice << " euros" << std::endl;
        double discount = this->totalPrice * 0.1;
        this->totalPrice = this->totalPrice * 0.9 ;
        std::cout << "Value discount applied : " << discount << " euros" << std::endl;
        return  this->totalPrice ;
   
    } else {
   
        return this->totalPrice;
    }

}

double TuesdayDiscountCommand::calculateArticlePrice(const std::string& article, int quantity)  {
    
    double pricePerArticle = 0.0;

    if (article == "Item1") {
        pricePerArticle = 10.0;

    } else if (article == "Item2") {
        pricePerArticle = 20.0;

    } else if (article == "Item3") {
        pricePerArticle = 30.0;

    } else if (article == "Item4") {
        pricePerArticle = 40.0;

    } else if (article == "Item5") {
        pricePerArticle = 50.0;

    } else if (article == "Item6") {
        pricePerArticle = 60.0;
    }

    return pricePerArticle * quantity;
}
