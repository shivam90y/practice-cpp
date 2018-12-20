
#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << " Enter the numbers" << endl;
    cin >> num;
    for (int a = 1; a <= num; a = a + 2)
    {
        cout << " " << a << " ";
        sum = sum + a;
    }
    cout << endl;
    cout << "Sum of odd numbers: " << sum << endl;
}
