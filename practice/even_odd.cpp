#include <iostream>
using namespace std;
int main()
{

    int number;

    cout << "Enter the numbers: ";
    cin >> number;

    if (number % 2 == 0)
        cout << " It is even number: " << number << endl;
    else
        cout << "It is odd number: " << number << endl;

    return 0;
}