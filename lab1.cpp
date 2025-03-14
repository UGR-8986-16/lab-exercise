#include <iostream>
#define tax_rate 0.15

int main(){
    std::cout<<"The program analizes product sales and inventary to a store"<<std::endl;
    std::cout<<"c++ is a compiled language"<<std::endl;

    std::string productName;
    int productCategory;
    int initial_inventory_quantity;//*
    double product_price_per_unit;
    int number_of_item_sold;

    int newInventory;
    double total_sales_amount;
    std::string inventoryStatus;

    double sample_product_price;
    sample_product_price = 40.00;
    int sample_number_of_item{123};
    int sample_initial_inventory_quantity = 987;

    auto tSales = total_sales_amount;
    decltype(initial_inventory_quantity)  init_inventory;

    const double TAX_RATE = 0.15;
    
    std::cout<<"Read in the product name?:";
    std::getline(std::cin,productName);
    std::cout<<"Read in the product category from one to five?:";
    std::cin>> productCategory;
    std::cout<<"Read in the initial inventory quantity?:";
    std::cin>> initial_inventory_quantity;
    std::cout<<"Read in the product price?:";
    std::cin>> product_price_per_unit;
    std::cout<<"Read in the number of items sold?:";
    std::cin>> number_of_item_sold;

    newInventory = initial_inventory_quantity - number_of_item_sold;//*
    total_sales_amount = number_of_item_sold * product_price_per_unit;

    if (newInventory < 10){
      inventoryStatus = "low inventory";
    }
    else{
      inventoryStatus = "sufficient inventory";
    }

    
    if (productCategory == 1){
      std::cout<<"you have sellected electronics"<<std::endl;
    }
    else if (productCategory == 2){
      std::cout<<"you have sellected groceries"<<std::endl;
    }  
    else if (productCategory == 3){
      std::cout<<"you have sellected clothing"<<std::endl;
    }
    else if (productCategory == 4){
      std::cout<<"you have sellected stationery"<<std::endl;
    }
    else if (productCategory == 5){
      std::cout<<"you have sellected miscellaneous"<<std::endl;
    }
    else{
      std::cout<<"please sellect number bettwen 1 and 5"<<std::endl;
    }


    switch (productCategory){
    case 1:
       std::cout<<"you have sellected electronics"<<std::endl;
      break;
    case 2:
       std::cout<<"you have sellected groceries"<<std::endl;
      break;  
    case 3:
       std::cout<<"you have sellected clothing"<<std::endl;
      break;  
    case 4:
       std::cout<<"you have sellected stationery"<<std::endl;
      break;  
    case 5:
       std::cout<<"you have sellected miscellaneous"<<std::endl;
      break;    
    default:
       std::cout<<"please sellect number bettwen 1 and 5"<<std::endl;
      break;
    }


    std::cout<<"receipt"<<std::endl;
    for (int i = 1; i <= number_of_item_sold; i++){
      std::cout<<"product"<<i<<product_price_per_unit<<"BIRR"<<std::endl;
    }
    
    return 0;
}
