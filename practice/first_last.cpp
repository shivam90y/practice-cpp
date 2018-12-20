#include <iostream>
using namespace std;

int main()
{
    int num, first, last;
    cout << "Enter the numbers: ";
    cin >> num;
    first = num;
    last = num % 10;
    for (first = num; first >= 10; first = first / 10)
        ;
    cout << " The first digit of: " << first << endl;
    cout << " The last digit of: " << last << endl;
}