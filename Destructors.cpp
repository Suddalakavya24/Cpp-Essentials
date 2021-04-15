#include <iostream>
#include "cube1.h"
using namespace std;
using uiuc1::cube1;
int CreateOnStack()
{
      cube1 c(3);
      return c.volume();
}
int CreateOnHeap()
{
      cube1 *c = new cube1(10);
      cube1 *p = new cube1; //cube p is still on the heap
      delete c;
      return (*c).volume(); //or c->volume()
}
int main()
{
      CreateOnStack();
      CreateOnHeap();
      CreateOnStack();
      return 0;
}