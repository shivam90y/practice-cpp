#include <iostream>
using namespace std;
int main()
{
    int arr[20];
    int i;
    int pos = 0;
    int neg = 0;
    int even = 0;
    int odd = 0;
    int zero = 0;
    for (i = 0; i < 20; i++)
    {
        cout << "Enter the numbers";
        cin >> arr[i];
        if (arr[i > 0])
            pos++;
        else if (arr[i] < 0)
            neg--;
        else
            zero++;
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
        cout << "Positive " << pos << "\nNegative " << neg << "\nZero " << zero << "\nOdd " << odd << "\nEven " << even << "\n";
        return 0;
    }
}