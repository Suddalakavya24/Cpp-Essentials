#include <iostream>
#include "cube1.h"
using uiuc1::cube1;
using namespace std;
int main()
{ //***********Normal variable***************
      cube1 c1(10);
      cube1 c2 = c1; //normal copy constructor

      //**********Reference variables************
      cube1 c3(10);
      cube1 &c4 = c3; //aliasing so, no copy
      //c3 is a cube reference initialized to c1,so  c1 and c3 refers to same cube

      //**********Pointer variables**************
      cube1 c5(10);
      cube1 *c6 = &c5; //only 1 cube got created
      return 0;
}