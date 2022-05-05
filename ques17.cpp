#include <iostream>
using namespace std;

//Binary number

int main()
{
    int n;
    cin >> n;
    int count = 0;
    
    while(n!=0)
    {
        n = n&(n<<1);
        count << n;
    }
    cout << count << endl;
    return 0;
}
