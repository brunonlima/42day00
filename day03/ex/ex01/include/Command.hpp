#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <string>
#include <vector>

class Command {
public:
    Command(int id, const std::string& date, const std::string& client);
    void add_article(const std::string& article, int quantity) ;
    virtual double get_total_price() = 0 ;
    double calculateArticlePrice(const std::string& article, int quantity);


protected:
    int id;
    std::string date;
    std::string client;
    std::vector<std::pair<std::string, int> > articles; // Lista de artigos e suas quantidades
};

#endif // COMMAND_HPP
