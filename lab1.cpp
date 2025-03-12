#include <iostream>

int main(){
    std::cout<<"The program analizes product sales and inventary to a store"<<std::endl;
    std::cout<<"c++ is a compiled language"<<std::endl;

    std::string productName;
    int productCategory;
    int initial_inventory_quantity;
    double product_price_per_unit;
    int number_of_item_sold;

    int newInventory = initial_inventory_quantity - number_of_item_sold;
    double total_sales_amount = number_of_item_sold * product_price_per_unit;
    std::string inventoryStatus;
}