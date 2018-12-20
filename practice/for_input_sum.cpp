#include <iostream>
using namespace std;
int main()
{
    int i, num, sum = 0;
    cout << "Enter the natural numbers\n";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        cout << i << endl;
        sum = sum + i;
    }
    cout << "sum of numbers" << sum << endl;
}