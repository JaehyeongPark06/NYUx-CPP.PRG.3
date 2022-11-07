#include <iostream>

using namespace std;

void addOne(int *ptrNum) {
  (*ptrNum)++;
}

int main() {
  int a = 0;
  addOne(&a);
  cout << a << endl;
  return 0;
}
