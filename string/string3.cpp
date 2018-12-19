#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int len;
    char str1[10] = "Shivam";
    char str2[10] = "Yadav";
    char str3[15];
    strcpy(str3, str1);
    cout << "strcpy(str3,str1):" << str3 << endl;
    strcat(str1, str2);
    cout << "strcat(str1,str2):" << str1 << endl;
    len = strlen(str1);
    cout << "strlen(str1):" << len << endl;
    return 0;
}