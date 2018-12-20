#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    int i, num;
    for (i = 0; i < 10; i++)
    {
        cout << "Enter the number\n";
        cin >> arr[i];
    }
    cout << "number is:";
    for (i = 0; i < 10; i++)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}
