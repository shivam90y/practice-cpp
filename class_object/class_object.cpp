#include <iostream>
using namespace std;
class Box
{
  public:
    double breadth;
    double height;
    double length;
};
int main()
{
    Box box1;
    Box box2;
    double volume = 0.0;
    box1.breadth = 2.5;
    box1.height = 3.5;
    box1.length = 4.5;
    box2.breadth = 1.5;
    box2.height = 2.5;
    box2.length = 5.5;
    volume = box1.breadth * box1.height * box1.length;
    cout << "volume of box1:" << volume << endl;
    volume = box2.breadth * box2.height * box2.length;
    cout << "volume of box2:" << volume << endl;
    return 0;
}