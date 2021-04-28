#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  string stdName;
  int scores;

  ifstream inFile;
  inFile.open("students.txt");
  if (inFile.fail()){
    cout <<"Error" << endl;
    exit (0);
  }


}