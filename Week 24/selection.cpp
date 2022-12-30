#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

void selection_sort(int arr[], int elements)
{
  for (int i = 0; i < elements - 1; i++)
  {
    int min = i;
    for (int j = i + 1; j < elements; j++)
    {
      if (arr[j] < arr[min])
      {
        min = j;
      }
    }
    swap(&arr[min], &arr[i]);
  }
}

int main()
{
  int lst[] = {19, 2, 20, 1, 0, 18};
  selection_sort(lst, 6);
  for (int i = 0; i < 6; i++)
  {
    cout << lst[i] << " ";
  }
  cout << endl;
  return 0;
}