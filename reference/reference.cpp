
#include <iostream>
using namespace std;
int main()
{
    int i;
    double d;
    int &k = i;
    double &l = d;
    i = 10;
    cout << "Value of i:" << i << endl;
    cout << "Value of i reference:" << k << endl;
    d = 20.5;
    cout << "Value of d:" << d << endl;
    cout << "Value of d reference:" << l << endl;
    return 0;
}