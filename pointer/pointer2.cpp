#include <iostream>
using namespace std;
int main()
{
    int var = 10;
    int *ip;
    ip = &var;
    cout << "value of var variable";
    cout << var << endl;
    cout << "Address stored in ip variable";
    cout << ip << endl;
    cout << "value of ip variable";
    cout << *ip << endl;
    return 0;
}