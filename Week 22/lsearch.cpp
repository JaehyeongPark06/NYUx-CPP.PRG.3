#include <iostream>
using namespace std;

int linear_search(int search_value, int lst[], int elements)
{
  int count = 0;
  for (int i = 0; i < elements; i++)
  {
    count++;
    if (lst[i] == search_value)
    {
      return count;
    }
  }
  return count;
}

int main()
{
  int lst[] = {19, 2, 20, 1, 0, 18};
  cout << linear_search(20, lst, 6);
  return 0;
}