#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;
  int i = 1;
  while (i <= num)
  {
    if (num % i == 0)
    {
      cout << i << " ";
    }
    i++;
  }

  return 0;
}
