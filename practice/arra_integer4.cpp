#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    int sum, product, i;
    printf("\nEnter elements : \n");
    for (i = 0; i < 10; i++)
    {
        printf("Enter arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    sum = 0;
    product = 1;
    for (i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
        product = product * arr[i];
    }

    printf("\nSum of array is     : %d", sum);
    printf("\nProduct of array is : %d\n", product);

    return 0;
}