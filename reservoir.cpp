/*
Author: Evan Huang
Course: CS 135
Instructor: Mike Zamansky
Assignment: Lab_3 Tasks A, B & C

Create a get basin function. Create two functions--min and max. 
Create a comparison function for basins--east and west, return greatest given date. 
*/


#include <algorithm>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>
#include "reservoir.h"


std::ifstream get_file(){
  std::ifstream file("Current_Reservoir_Levels.tsv");

  if (file.fail()) {
      std::cerr << "File cannot be opened for reading." << std::endl;
      exit(1);
  }
  std::string junk;
  getline(file, junk);

  return file;
}


double get_east_storage(std::string date){
  std::ifstream file(get_file());
  std::string dCheck, eastSt;
  
  while(file >> dCheck >> eastSt) {  
    
      file.ignore(INT_MAX, '\n');  
                       
      if (dCheck == date){
        return std::stof(eastSt);
      } 
  }
  return 0;  
}


double get_min_east(){
  std::ifstream file(get_file());
  std::string dCheck, eastSt;
  
  double min = INT_MAX;
  while(file >> dCheck >> eastSt){
    
      file.ignore(INT_MAX, '\n');
      
      if (min > std::stod(eastSt)){
        min = std::stod(eastSt);
      }
  }
  return min;
}


double get_max_east(){
  std::ifstream file(get_file());
  std::string dCheck, eastSt;
  
  double max = INT_MIN;
  while(file >> dCheck >> eastSt){
    
      file.ignore(INT_MAX, '\n');
      
      if (max < std::stod(eastSt)){
        max = std::stod(eastSt);
      }
  }
  return max;
}


std::string compare_basin(std::string date){
  std::ifstream file(get_file());
  std::string dCheck, eastSt, eastEl, westSt;

  while (file >> dCheck >> eastSt >> eastEl >> westSt){
    
    file.ignore(INT_MAX, '\n');
      
    if (date == dCheck){
      if (stod(eastSt) == stod(westSt)){
        return "Equal ";
      }
      else if (stod(eastSt) > stod(westSt)){
        return "East";
      }
      else{
        return "West";
      }
    }
  }
  return "";
}
