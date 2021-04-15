#include <iostream>
#include <fstream>
using namespace std;
int main(){
  string type;
  cin >> type;
  ofstream textfile;
  textfile.open("list10.txt");

  if(type == "EXIT") {
    textfile.close();
  }
  else {
    textfile << type;
  }
  return 0;
}
