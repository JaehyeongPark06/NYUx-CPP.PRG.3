#include <iostream>
using namespace std;

void merge_sort(int arr[], int left, int right)
{
  if (left < right)
  {
    int middle = (left + right) / 2;
    merge_sort(arr, left, middle);
    merge_sort(arr, middle + 1, right);
    merge(arr, left, middle, right);
  }
}

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
  int lst[] = {19, 2, 20, 1, 0, 18};
  merge_sort(lst, 0, 5);
  for (int i = 0; i < 6; i++)
  {
    cout << lst[i] << " ";
  }
  cout << endl;
  return 0;
}