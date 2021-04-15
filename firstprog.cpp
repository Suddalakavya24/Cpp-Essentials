#include <iostream>
#include "cube.h"
using namespace std;
int main()
{
      uiuc::cube c;
      cout << c.volume(10, 20, 30);
      int q = 35;
      int *p = &q;
      cout << "value of p " << p << endl;
      cout << "value of &p " << &p << endl;
      cout << "value of *p " << *p << endl;
      cout << "value of q " << q << endl;
      cout << "value of &q " << &q << endl;

      return 0;
}
