#ifndef TUESDAYDISCOUNTCOMMAND_HPP
#define TUESDAYDISCOUNTCOMMAND_HPP

#include "Command.hpp"

class TuesdayDiscountCommand : public Command {
public:
    TuesdayDiscountCommand(int id, const std::string& date, const std::string& client);
    double get_total_price();
    double calculateArticlePrice(const std::string& article, int quantity);



private:
    double totalPrice;
};

#endif // TUESDAYDISCOUNTCOMMAND_HPP
