#include <iostream>
using namespace std;
int main()
{
    int arr[3][4] = {2, 3, 4, 5, 6, 7, 8, 9, 1, 11, 21, 12};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            cout << arr[i][j] << endl;
    }
    return 0;
}