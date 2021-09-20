  /*
Author: Evan Huang
Course: CS 135
Instructor: Mike Zamansky
Assignment: Lab_3 
  Main is the compliation of Tasks: A, B, C, & D.
*/


#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "reservoir.h"
#include "reverseorder.h"

int main(){

  std::cout<<"\nTask A:\nEnter a date: ";
  std::string date;
  std::cin >> date;
  std::cout<< "\nEast Basin Storage: " << get_east_storage(date) << " billion gallons.";


  std::cout << "\n\nTask B:\n";
  std::cout << "\nminimum storage in East basin: " << get_min_east() << " billion gallons";
  std::cout << "\nMaximum storage in East basin: " << get_max_east() << " billion gallons";


  std::cout << "\n\nTask C:\nEnter a date to compare basins: ";
  std::cin >> date;
  std::cout << date << ": " << compare_basin(date);


  std::cout << "\n\nTask D:\nEnter earlier date: ";
  std::string date1, date2;
  std::cin >> date1;
  std::cout << "Enter later date: ";
  std::cin >> date2;
  reverse_order(date1, date2);

  std::cout << std::endl;
  return 0;
}
