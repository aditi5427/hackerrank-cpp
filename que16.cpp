#include <iostream>
using namespace std;

// 2D-ARRAY

int main()
{
    int arr[6][6], i ,j;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    int max = 1000;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = (arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2]);
            if (sum > max)
                max = sum;
        }
    }
    cout << max;
    return 0;
}