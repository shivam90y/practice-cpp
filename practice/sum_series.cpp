#include <iostream>
using namespace std;
int main()
{
    int i, num, sum = 0;
    cout << "Enter the number";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        sum = sum + i * i;
        cout << i << "*" << i << " = " << i * i << endl;
    }
    cout << "sum of series: " << sum << endl;
}