#include <iostream>
#include <iomanip>

double fuelcost(double litres, double LitrePrice) {
    double totalCost = litres * LitrePrice;

    int discount = int (litres / 2) * 5;
    discount = std::min(discount, 25); 
    totalCost -= discount / 100.0; 

    return totalCost;
}

int main() {
    double litres, LitrePrice;
    std::cout << "Enter the number of litres: ";
    std::cin >> litres;
    std::cout << "Enter the price per litre (in dollars): ";
    std::cin >> LitrePrice;

    double cost = fuelcost(litres, LitrePrice);
    std::cout << "Total cost: $" << std::fixed << std::setprecision(2) << cost << std::endl;

    return 0;
}
