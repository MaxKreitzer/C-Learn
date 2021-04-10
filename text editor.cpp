#include <iostream>
#include <iostream>
#include <fstream>
using namespace std;
int main(){
  string type;
  cin >> type;
  ofstream textfile;
  textfile.open("typefile.odt");
  if(type == "EXIT") {
    textfile.close();
  }
  else {
    textfile << type;
  }
  return 0;
}
