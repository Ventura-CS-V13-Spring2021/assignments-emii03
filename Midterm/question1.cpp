#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {


  ifstream inFile;

  string name;

  int score1, score2;
  int sum;
  int average;



  inFile.open("students.txt");//to allow interaction with txt file

  if (inFile.fail()){
    cout <<"File error" << endl;
    exit (0);


  }

  while (inFile.good()){
    cout << "Student:" << name << "\t";
    cout << "Score 1:" << score1 << "\t" << "Score 2:" << score2 << "\t";
   
   sum = score1 + score2;//
   cout << "Sum:" << sum << "\t";

   average = sum / 2;
   cout << "Average:" << average << "\t";

   if (average >= 80)
   {
     
   }




  }


}