#include <iostream>
using namespace std;
class Box
{
public:
      int height;
      Box()
      {
            height = 1;
      }
      Box(int l); //overloaded parameterized constructor
      int length;
      double area;
};
Box::Box(int l)
{
      height = l;
}
int main()
{
      Box b;
      cout << b.length << endl; //gives out  default value set by default constructor
      cout << b.height << endl; //gives out 1 set by user defined constructor
      Box b1(20);//parameterized constructor invokation
      cout << b1.height << endl;
      return 0;
}