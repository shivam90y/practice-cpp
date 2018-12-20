#include <iostream>
using namespace std;
int main()
{
    int i, j, num;
    cout << "Enter the numbers:";
    cin >> num;
    for (i = 1; i <= num; i++)
        cout << i << " ";
    cout << endl;
    {
        for (j = num; j >= 1; j--)
            cout << j << " ";
        cout << endl;
    }
    cout << endl;
    return 0;
}