#include <iostream>
#include <iostream>
#include <fstream>
using namespace std;
int main(){
  string type;
  cin >> type;
  ofstream textfile;
  textfile.open("typefile.odt");
  textfile << type;
  textfile.close();
  return 0;
}
