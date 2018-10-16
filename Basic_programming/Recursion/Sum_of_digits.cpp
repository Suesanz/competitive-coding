#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
  if (n == 0)
    return 0;

  int sum = sumOfDigits(n / 10);
  return sum + n % 10;
}

int main()
{
  int n;
  cin >> n;
  cout << sumOfDigits(n) << endl;
}
