#include <iostream>
using namespace std;
int main()
{
    int prv = 0, pre = 1, j, i, num;
    cout << " Enter the numbers: ";
    cin >> num;
    cout << prv << " " << pre;
    for (i = 3; i <= num; i++)
    {
        j = prv + pre;
        prv = pre;
        pre = j;
        cout << " " << j;
    }
    cout << endl;
}
