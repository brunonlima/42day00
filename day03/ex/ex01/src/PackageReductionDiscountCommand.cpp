#include "PackageReductionDiscountCommand.hpp"
#include<iostream>

PackageReductionDiscountCommand::PackageReductionDiscountCommand(int id, const std::string& date, const std::string& client)
    : Command(id, date, client), totalPrice() {}

double PackageReductionDiscountCommand::get_total_price()  {
    this->totalPrice = 0.0;
        
    // Calculate the total price based on articles and their quantities
    for (size_t i = 0; i < this->articles.size(); ++i) {
        this->totalPrice += calculateArticlePrice(this->articles[i].first, this->articles[i].second);
    }
    // Apply a 10 euro discount if the total price exceeds 150 euros

    if (this->totalPrice > 150) {
        std::cout << "Command exceed 150 euros apply discount of 10 euros on: " << this->totalPrice << " euros" << std::endl;
        std::cout << "Command exceed 150 euros apply - Vaalue with discount : " << this->totalPrice - 10 << " euros" << std::endl;
        return this->totalPrice - 10;

    } else {
          return  this->totalPrice;
    } 
    return  this->totalPrice;
}

double PackageReductionDiscountCommand::calculateArticlePrice(const std::string& article, int quantity)  {

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
