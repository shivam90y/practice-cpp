#include <iostream>
using namespace std;
int main()
{

    int num, i = 0;
    cout << " check prime or not: ";
    cin >> num;
    for (int a = 1; a <= num; a++)
    {
        if (num % a == 0)
        {
            i++;
        }
    }
    if (i == 2)
    {
        cout << " It is a prime number. \n";
    }
    else
    {
        cout << " It is not a prime number. \n";
    }
}