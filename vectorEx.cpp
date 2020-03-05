#include <fstream>
#include <iostream>
#include <vector>
// read file
void readFile(std::vector<double> & vec, const std::string fname) {
  double temp = 0;
    // open file
    std::ifstream infile;
    infile.open(fname);
    // read in as doubles
    while (infile >> temp){
      vec.push_back(temp);
    }
    // close file
    infile.close();
}
// print
void printNumbers(const std::vector <double> &vec) {
 for(int i = 0; i < vec.size();i++) {
   std::cout << vec.at(i) << std::endl;
 }
}
// main
int main() {
  std::vector<double> myVector;
  std::string fileName = "numbers.txt";
  // call readFile here
  readFile(myVector, fileName);
  // call printNumbers here
  printNumbers(myVector);
}
