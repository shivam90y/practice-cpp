#include <iostream>
using namespace std;
int main()
{
    int num, r, sum = 0;
    cout << " Enter a number: ";
    cin >> num;
    while (num > 0)
    {
        r = num % 10;
        num = num / 10;
        sum = sum + r;
    }
    cout << " The sum of digits is: " << sum << endl;
}
