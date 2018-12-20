#include <iostream>
using namespace std;
int main()
{
    int i, num, fact = 1;
    cout << "Enter the numbers";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << " factorial number:" << fact;
    return 0;
}