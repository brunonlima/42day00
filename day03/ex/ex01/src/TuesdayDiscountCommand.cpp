#include "TuesdayDiscountCommand.hpp"

TuesdayDiscountCommand::TuesdayDiscountCommand(int id, const std::string& date, const std::string& client) : Command(id, date, client) {}

double TuesdayDiscountCommand::get_total_price() const {
    double total_price = 0.0;

    // Calculate the total price based on articles and their quantities
    for (size_t i = 0; i < articles.size(); ++i) {
        total_price += calculate_article_price(articles[i].first, articles[i].second);
    }

    // Apply a 10% discount on Tuesdays
    return date == "Tuesday" ? total_price * 0.9 : total_price;
}

double TuesdayDiscountCommand::calculate_article_price(const std::string& article, int quantity) const {
    // Implement your logic to calculate the price for each article
    // For demonstration purposes, we'll assume a fixed price of 10 euros per article.
    const double price_per_article = 10.0;
    return price_per_article * quantity;
}
