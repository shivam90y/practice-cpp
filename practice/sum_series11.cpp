#include <iostream>
using namespace std;
int main()
{
    int num, i, sum = 0;
    int t = 1;
    cout << " Enter the number: ";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        cout << t << " ";
        if (i < num)
        {
            cout << "+ ";
        }
        t = (t * 10) + 1;
        sum = sum + t;
    }
    cout << "\n The sum of series is: " << sum << endl;
    return 0;
}
