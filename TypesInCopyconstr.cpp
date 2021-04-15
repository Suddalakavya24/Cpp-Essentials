#include <iostream>
#include "cube.h"
using namespace std;
uiuc::cube foo(uiuc::cube c)
{
      uiuc::cube c3;
      return c3;
}
int main()
{
      uiuc::cube c1; //default constructor
      uiuc::cube c4=foo(c1);
      return 0;
  //what v can infer from this is...for copying a par from mainframe to func frame ,copy constr invoked and for returning par from func frame to main frame--->no copy constr and after returning ...copying that value to new doesnt need copy constr
}