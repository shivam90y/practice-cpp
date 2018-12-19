#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t now = time(0);
    char *date = ctime(&now);

    cout << "The local date and time is: " << date << endl;
}