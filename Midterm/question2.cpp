#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int getRdnum(void);
int isGreater(int);

int main(){

  int N;
  int random;

  srand(time(0));
  ofstream ofs;

  ofs.open("numbers.txt");
  if (ofs.fail())
  {
    cout << "File open error" << endl;
    exit(0);

  }


  for (int i = 0; i <N; i++)
  random = getRdnum();
  

{

}
}

