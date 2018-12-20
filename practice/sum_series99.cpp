#include <iostream>
using namespace std;
int main()
{
    int i, num, sum = 0;
    int t = 9;
    cout << "Enter the numbers: ";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        cout << t << " ";
        if (i < num)
            t = (t * 10) + 9;
        sum = sum + t;
    }
    cout << endl;
    cout << "Sum of series:" << sum << endl;
    return 0;
}