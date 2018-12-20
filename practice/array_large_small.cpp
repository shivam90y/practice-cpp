#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 34, 54, 65, 23, 65, 76, 77, 12};
    int smallest = arr[0];
    int largest = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
    }
    cout << "largest: " << largest << "\nsmallest: " << smallest << "\n";
    return 0;
}