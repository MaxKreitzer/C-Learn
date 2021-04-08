#include <iostream>
using namespace std;
int main() {
  int x;
  cout << "Type the temperature you would like converted: ";
  cin >> x;
  cout << "Type F to convert to fahrenheit \n";
  cout << "Type C to convert to celcius \n";
  string y;
  cin >> y;
  if(y == "C"){
    cout << (x - 32) * 0.5559;
  }
  if(y == "F"){
    cout << (x * 1.8) + 32;
  }
  return 0;
}
