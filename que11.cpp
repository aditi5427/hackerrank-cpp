#include <iostream>
#include <cstring>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T;
    cin >> T;
    char input[10000];
    
    for(int k = 0; k<T; k++)
    {
        cin >>input;
    
    for(int i = 0; i<strlen(input); i+=2)
    {
        cout << input[i];
    }
    cout << " ";
    for(int i = 1; i < strlen(input); i+=2 )
    {
        cout <<input[i];
}
cout << endl;
}
return 0;
}