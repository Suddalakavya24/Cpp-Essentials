#include <iostream>
using namespace std;
int main()
{
      int a[10];
      a[5] = 100;
      cout << a[5] << endl;

      int *p; //pointerss
      
      p = new int[5];
      cout << p << endl;
      for (int i = 0; i < 5; i++)
      {
            p[i] = i;
            cout << p[i] << endl;
      }
      p++;
      cout << p << endl;
      delete[] p;
      return 0;
}