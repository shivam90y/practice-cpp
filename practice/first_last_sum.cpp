#include <iostream>
using namespace std;
int main()
{
    int first, last, num, sum = 0;
    cout << "Enter the numbers:";
    cin >> num;
    first = num;
    last = num % 10;
    for (first = num; first >= 10; first = first / 10)
        ;
    cout << "First digit: " << first << endl;
    cout << "Last digit: " << last << endl;
    sum = sum + first + last;
    cout << "Sum of first and last digit: " << sum << endl;
    return 0;
}