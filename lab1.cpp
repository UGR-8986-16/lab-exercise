#include <iostream>
#define tax_rate 0.15

int main(){
    std::cout<<"The program analizes product sales and inventary to a store"<<std::endl;
    std::cout<<"c++ is a compiled language"<<std::endl;

    std::string productName;
    int productCategory;
    int initial_inventory_quantity;
    double product_price_per_unit;
    int number_of_item_sold;

    int newInventory;
    double total_sales_amount;
    std::string inventoryStatus;

    auto tSales = total_sales_amount;
    decltype(initial_inventory_quantity)  init_inventory;
    const double TAX_RATE = 0.15;
    
    std::cout<<"Read in the product name?:";
    std::getline(std::cin,productName);
    std::cout<<"Read in the product category?:";
    std::cin>> productCategory;
    std::cout<<"Read in the initial inventory quantity?:";
    std::cin>> initial_inventory_quantity;
    std::cout<<"Read in the product price?:";
    std::cin>> product_price_per_unit;
    std::cout<<"Read in the number of items sold?:";
    std::cin>> number_of_item_sold;

    newInventory = initial_inventory_quantity - number_of_item_sold;
    total_sales_amount = number_of_item_sold * product_price_per_unit;

    if (newInventory < 10)
      inventoryStatus = "low inventory";
    else
      inventoryStatus = "sufficient inventory";
    
    
}