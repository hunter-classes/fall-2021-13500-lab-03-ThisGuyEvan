#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "reservoir.h"

int main(){
  
  std::string date;
  std::cout<<"\nEnter a date: ";
  std::cin >> date;

  std::cout<< "\nEast Basin Storage: " << get_east_storage(date) << " billion gallons." << std::endl;
  return 0;  

}
