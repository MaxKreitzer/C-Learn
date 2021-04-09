#include <iostream>
#include <sstream>
using namespace std;
int main(){
  string wrd;
  cin >> wrd;
  for (int a = wrd.size(); a>=0; a--){
    cout << wrd[a];
  }
  return 0;
}
