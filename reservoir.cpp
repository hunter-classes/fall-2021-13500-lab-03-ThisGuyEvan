#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "reservoir.h"


double get_east_storage(std::string date){

  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
      std::cerr << "File cannot be opened for reading." << std::endl;
      exit(1); // exit if failed to open the file
  }

  std::string junk;
  getline(fin, junk);

  std::string dCheck, eastSt;
  while(fin >> dCheck >> eastSt) { 
      // this loop
      //eads the file line-by-line
      // extracting 5 values on each iteration 
    
      fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignorring the remaining columns 
      if (dCheck == date){
        return std::stof(eastSt);
      } 
  }
  return 0;  
}
