#include <iostream>
using namespace std;

int factorial(int n)
{
  if(n==1 || n==0)
  {
      return 0;
  }
  else
  {
      return(n*factorial(n-1));
  }
}
int main()
{
    int n;
    cout << "Enter number"<< endl;
    cin >> n;

    cout << n << factorial(n) << endl;
    return 0;
}