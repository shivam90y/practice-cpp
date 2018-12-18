#include <iostream>
using namespace std;
int main()
{
    const int length = 30;
    const int width = 40;
    const char NEWLINE = '\n';
    cout << length << endl;
    cout << width << endl;
    const int area = length * width;
    cout << area;
    cout << NEWLINE;
    return 0;
}
