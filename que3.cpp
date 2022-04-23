#include <iostream>
#include <cstdio>
#include <limits>
#include <iomanip>

using namespace std;

// printing values

int main() {
    int i = 3;
    long l = 1234;
    char ch = 'a';
    float f = 334.230;
    double d = 14049.304930000;
    
    cin >>i >>l >>ch >> f >> d;
    
    cout << i << endl;
    cout << l << endl; 
    cout << ch << endl;
    cout << fixed << setprecision(3) << f <<endl;
    cout <<  fixed << setprecision(9) << d << endl;
    
    return 0; 
}
