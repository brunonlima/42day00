#ifndef TUESDAYDISCOUNTCOMMAND_HPP
#define TUESDAYDISCOUNTCOMMAND_HPP

#include "command.hpp"

class TuesdayDiscountCommand : public Command {
public:
    TuesdayDiscountCommand(int id, const std::string& date, const std::string& client, double total_price);
    double get_total_price() const;

private:
    double total_price;
};

#endif // TUESDAYDISCOUNTCOMMAND_HPP
