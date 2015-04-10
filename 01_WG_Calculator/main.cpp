/*
 *  Name: DicoFair (Distribute costs fairly)
 *  Author: Toni Ehmcke (April 2015)
 *  There are many situations where several people spent money on particular products
 *  and now one has to distribute the costs fairly. This programm calculates a balance
 *  for each of the participants that represents the amount of money one receives/has to pay.
 */

#include <iostream>
#include <string>
#include <sstream>

struct person
{
    std::string name;
    double moneyPaid;
    double moneyBalance;
};

int main()
{
    std::cout << "___________________Welcome to DicoFair!___________________" << std::endl << std::endl;
    std::string inputString;
    unsigned int numPerson = 0;
    while (numPerson <= 0)
    {
        std::cout << "Enter the number of persons that share the costs: ";
        std::getline(std::cin, inputString);
        std::stringstream(inputString) >> numPerson;
        if (numPerson <= 0)
            std::cout << "Please enter a valid number of people!" << std::endl;
    }

    return 0;
}
