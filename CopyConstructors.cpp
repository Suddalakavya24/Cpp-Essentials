#include <iostream>
#include "cube.h"
using namespace std;
int main()
{
      uiuc::cube b;
      b.length=12;
      b.height=15;
      uiuc::cube d=b;
      cout<<d.length;// d gets only length of b when copied but not height as copyconstructor dealt with only length
      //default copy cnstructor copieds everything!!!
      //copy constructors are automatically invoked when we pass parameters to a func, wen func returns anything, during initialization of a new obj
      cout<<d.height;

      return 0;

}