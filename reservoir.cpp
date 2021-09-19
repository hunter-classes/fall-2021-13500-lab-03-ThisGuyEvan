#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "reservoir.h"


double get_east_storage(std::string date){

  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
      std::cerr << "File cannot be opened for reading." << std::endl;
      exit(1); 
  }

  std::string junk;
  getline(fin, junk);

  std::string dCheck, eastSt;
  while(fin >> dCheck >> eastSt) {  
    
      fin.ignore(INT_MAX, '\n');  
                       
      if (dCheck == date){
        return std::stof(eastSt);
      } 
  }
  return 0;  
}
