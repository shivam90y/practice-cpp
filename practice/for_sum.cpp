#include <iostream>
using namespace std;
int main()
{
    int i, sum = 0;
    for (i = 1; i <= 10; i++)
    {
        cout << i << endl;

        sum = sum + i;
    }
    cout << sum;
    return 0;
}