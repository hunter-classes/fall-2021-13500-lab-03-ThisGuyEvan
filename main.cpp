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

  std::cout<<"\nTask A:";
  std::cout<< "\nEast Basin Storage: " << get_east_storage("01/20/2018") << " billion gallons.";
  std::cout<< "\nEast Basin Storage: " << get_east_storage("04/22/2018") << " billion gallons.";
  std::cout<< "\nEast Basin Storage: " << get_east_storage("07/19/2018") << " billion gallons.";
  

  std::cout << "\n\nTask B:\n";
  std::cout << "\nminimum storage in East basin: " << get_min_east() << " billion gallons";
  std::cout << "\nMaximum storage in East basin: " << get_max_east() << " billion gallons";


  std::cout << "\n\nTask C:";
  date = "09/13/2018";
  std::cout << date << ": " << compare_basin(date);
  date = "09/30/2018";
  std::cout << date << ": " << compare_basin(date);
  date = "06/13/2018";
  std::cout << date << ": " << compare_basin(date);

  std::cout << "\n\nTask D:";
  reverse_order("05/29/2018", "06/02/2018");
  reverse_order("11/29/2018", "12/01/2018");
  reverse_order("12/09/2018", "12/28/2018");

  std::cout << std::endl;
  return 0;
}
