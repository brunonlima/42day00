#ifndef PACKAGEREDUCTIONDISCOUNTCOMMAND_HPP
#define PACKAGEREDUCTIONDISCOUNTCOMMAND_HPP

#include "command.hpp"

class PackageReductionDiscountCommand : public Command {
public:
    PackageReductionDiscountCommand(int id, const std::string& date, const std::string& client, double total_price);
    double get_total_price() const;

private:
    double total_price;
};

#endif // PACKAGEREDUCTIONDISCOUNTCOMMAND_HPP
