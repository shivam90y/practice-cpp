
#include <iostream>
using namespace std;

int main()
{
    int arr[10], arr2[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter a number\n";
        cin >> arr[i];
    }
    int j = 0;
    for (int i = 9; i >= 0; i--)
    {
        arr2[j] = arr[i];
        j++;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr2[i] << "\n";
    }
    return 0;
}