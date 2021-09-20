  /*
Author: Evan Huang
Course: CS 135
Instructor: Mike Zamansky
Assignment: Lab_3 D
Create a function that prints out all values from a date interval in reverse.
*/

#include <algorithm>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>
#include "reverseorder.h"

void reverse_order(std::string date1, std::string date2){
  std::ifstream file("Current_Reservoir_Levels.tsv");

  if (file.fail()) {
      std::cerr << "File cannot be opened for reading." << std::endl;
      exit(1);
  }
  std::string junk;
  getline(file, junk);
  
  std::string date, eastSt, eastEl, westSt, westEl; 
  std::string revChro = "";
  bool inter;
  
  while(file >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    file.ignore(INT_MAX, '\n');
    
    if (date == date1){
      inter = true;
    }
    
    if (inter){
      revChro.insert(0, date + ": " + westEl + " ft\n");
    }
    
    if (date == date2){
      break;
    }
  }
  revChro.insert(0, "\n");
  std::cout << revChro;
  file.close();
}
