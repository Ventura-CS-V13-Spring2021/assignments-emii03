#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

  string Name;
  int score1, score2;

  ifstream inFile;

  inFile.open("students.txt");

  if (inFile.fail()){
    cout <<"Error" << endl;
    exit (0);
  

  }


}