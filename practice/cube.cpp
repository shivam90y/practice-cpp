#include <iostream>
using namespace std;
int main()
{
    int i, num, cube = 1;
    cout << "Enter the numbers";
    cin >> num;
    for (i = num; i <= num; i++)
    {
        cube = cube * i * i * i;
        cout << "Cube of number is:" << cube << endl;
    }
    return 0;
}