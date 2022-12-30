#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

int main()
{
  int lst[] = {19, 2, 20, 1, 0, 18};
  swap(&lst[0], &lst[1]);
  for (int i = 0; i < 6; i++)
  {
    cout << lst[i] << " ";
  }
  cout << endl;
  return 0;
}
