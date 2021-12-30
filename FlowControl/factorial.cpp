/*Find factorial of a number*/
#include <iostream>
using namespace std;

int factorial(unsigned int num)
{
  int fact = 1;
  if (num <= 1)
  {
    return 1;
  }
  else
  {
    int i = 1;
    while (i <= num)
    {
      fact = fact * i;
      i++;
    }
    return fact;
  }
}

int main()
{
  int num;
  cout << "Enter the number: ";
  cin >> num;

  int fact = factorial(num);
  cout << "Factorial of number " << num << " is: " << fact << endl;
  return 0;
}
