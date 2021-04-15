#include <iostream>
using namespace std;
class Cube
{
public:
      int length = 10;
      int breadth = 20;
      int height = 5;
      int getvolume();
      int getarea();
};
int Cube::getvolume()
{
      return length * breadth * height;
}
int Cube::getarea()
{
      return length * breadth;
}
Cube *func1()
{
      Cube c;
      c.length = 100;
     return &c; //gives us error as after completion of function , all var memory inside func gets deleted, so it cant pass or return local variables address to main
}
void func2()
{
}
int main()
{
      Cube *p = func1();
      func2();
      cout << p->length << endl; //or you can do (*p).length

      Cube *c1 = new Cube;
      Cube *c2 = c1;
      (*c1).length = 300;
      delete c2;
      delete c1; //oh oh! gives us error as already we deleted
}