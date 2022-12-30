#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(int n)
{
  // Base case
  if (n < 10)
    return true;
  // Recursive case
  int last_digit = n % 10;
  int first_digit = n;
  while (first_digit >= 10)
    first_digit /= 10;
  if (first_digit != last_digit)
    return false;
  return is_palindrome((n % 100) / 10);
}

int main()
{
  int n;
  cin >> n;
  cout << is_palindrome(n) << endl;
}