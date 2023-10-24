#include "PackageReductionDiscountCommand.hpp"

PackageReductionDiscountCommand::PackageReductionDiscountCommand(int id, const std::string& date, const std::string& client, double total_price)
    : Command(id, date, client), total_price(total_price) {}

double PackageReductionDiscountCommand::get_total_price() const {
    // Apply a 10 euro discount if the total price exceeds 150 euros
    return total_price > 150 ? total_price - 10 : total_price;
}
