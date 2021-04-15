#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;
int main() {
  ifstream file;
  string strnumber;
  int num;
  // Open the file.
  file.open("list10.txt");

  while (file >> strnumber) {
    // converts str to int
    stringstream ss;
    ss << strnumber;
    ss >> num;

    vector<int> store{};
    store.push_back(num);
    for(int i = 0; i < store.size(); i++){
      cout << store[i] << "\n";
//    sort(store.begin(), store.end(), greater<int>());
//       for (auto x : store) {
//         cout << x << " ";
    }
//    sort(store.begin(), store.end(), greater<int>());
//    for (auto x : store) {
//      cout << x << " ";
  }
  // closes file just in case
  file.close();
  return 0;
}
