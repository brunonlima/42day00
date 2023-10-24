#include "Command.hpp"
#include <iostream>

Command::Command(int id, const std::string& date, const std::string& client)
    : id(id), date(date), client(client) {}

void Command::add_article(const std::string& article, int quantity) {
    // Adiciona o artigo e sua quantidade à lista de artigos
    articles.push_back(std::make_pair(article, quantity));
}

double Command::get_total_price()  {
    double totalPrice = 0.0;

     // Calculate the total price based on articles and their quantities
    for (size_t i = 0; i < this->articles.size(); ++i) {
        totalPrice += calculateArticlePrice(this->articles[i].first, this->articles[i].second);
    }

    return totalPrice;
}

double Command::calculateArticlePrice(const std::string& article, int quantity)  {

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
