#include <iostream>
using namespace std;
int main()
{
    int i, j, k = 1, num;
    cout << "Enter the numbers:";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
            cout << k++ << " ";
        cout << endl;
    }
    return 0;
}