#include <bits/stdc++.h>
using namespace std;

int binary_search(int search_value, int lst[], int elements)
{
  int count = 0;
  int low = 0;
  int high = elements - 1;
  int mid;
  while (low <= high)
  {
    mid = (low + high) / 2;
    if (lst[mid] == search_value)
    {
      return count + 1; // adding one because it checks again
    }
    else if (lst[mid] < search_value)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
    count++;
  }
  return count;
}

int main()
{
  int lst[] = {0, 1, 2, 18, 19, 20, 25};
  cout << binary_search(20, lst, 7);
  return 0;
}
