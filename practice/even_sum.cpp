#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "Enter the numbers " << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        cout << i * 2 << " ";
        sum = sum + i * 2;
    }
    cout << "Sum of even numbers:" << sum << endl;
}