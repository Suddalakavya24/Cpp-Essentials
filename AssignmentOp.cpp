#include <iostream>
#include "cube.h"
using namespace std;
using uiuc::cube;
int main()
{
      cube c;      // DC
      cube c2;     //DC
      cube c1 = c; //CC
      c = c2;      //AO
      return 0;
}