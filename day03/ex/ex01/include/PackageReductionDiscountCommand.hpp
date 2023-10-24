#ifndef PACKAGEREDUCTIONDISCOUNTCOMMAND_HPP
#define PACKAGEREDUCTIONDISCOUNTCOMMAND_HPP

#include "Command.hpp"

class PackageReductionDiscountCommand : public Command {
public:
    PackageReductionDiscountCommand(int id, const std::string& date, const std::string& client);
    double get_total_price();
    double calculateArticlePrice(const std::string& article, int quantity);



private:
    double totalPrice;
};

#endif // PACKAGEREDUCTIONDISCOUNTCOMMAND_HPP
