#include <iostream>
using namespace std;
int main()
{
    int i, j, num;
    cout << "Enter the number";
    cin >> num;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= num; j++)
        {
            if (j == num)
                cout << j << " x " << i << " = " << j * i;
        }
        cout << endl;
    }
    return 0;
}