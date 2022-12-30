#include <iostream>
using namespace std;

void merge(int arr[], int left, int middle, int right)
{
  int i = left;
  int j = middle + 1;
  int k = left;
  int temp[right + 1];
  while (i <= middle && j <= right)
  {
    if (arr[i] < arr[j])
    {
      temp[k] = arr[i];
      i++;
    }
    else
    {
      temp[k] = arr[j];
      j++;
    }
    k++;
  }
  while (i <= middle)
  {
    temp[k] = arr[i];
    i++;
    k++;
  }
  while (j <= right)
  {
    temp[k] = arr[j];
    j++;
    k++;
  }
  for (int i = left; i <= right; i++)
  {
    arr[i] = temp[i];
  }
}

int main()
{
  int lst[] = {0, 2, 1, 18, 20};
  merge(lst, 0, 1, 4);
  for (int i = 0; i < 5; i++)
  {
    cout << lst[i] << " ";
  }
  cout << endl;
  return 0;
}