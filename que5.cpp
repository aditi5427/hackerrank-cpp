#include <iostream>
using namespace std;

//print max no

int max_of_four(int a, int b, int c, int d)
{
    return max(max(a ,b ),max(c ,d ));
}

int main()
{
    int a = 3;
    int b = 4;
    int c = 6;
    int d = 5;
    cin >> a >> b >> c >> d;

    int ans = max_of_four(a,b,c,d);
    cout << ans << endl;

    return 0;
}