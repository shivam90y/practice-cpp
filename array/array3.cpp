#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int arr[10];
    for (i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
    }

    for (j = 0; j < 10; j++)

    {
        cout << "Element" << j, arr[j];
        cout << endl;
    }
    return 0;
}