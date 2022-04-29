#include <iostream>
using namespace std;

// reverse array

int main()
{
    int size = 0;
    int value = 0;

    cin >> size;

    int arr[size];

    for(int i  = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for(int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }

    return 0;
}