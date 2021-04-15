#include <iostream>
using namespace std;
int main()
{
      int *p = new int; //p points to some memory location in the heap having int capacity
      cout << p << endl;
      //*p always points to an address
      //print p to get the pointed address
      //print *p to get value at the pointed address
      //if p=&a, then &a gives us pointed addr
      // a gives us value at pointed address
      //change *p to change value stored in a
      cout << *p << endl;
      cout << &p << endl;
      *p = 45;
      cout << p << endl;
      cout << *p << endl;
      cout << &p << endl;

      int q = 30; //stack,Now earlier p pointed to heap, so heap ref gone and now p points to addr of q on stack
      p = &q;
      cout << p << endl;
      cout << *p << endl;
      cout << &p << endl;
      cout << &q << endl;

      p = new int; //Now new memory in heap got created!!:-))
      cout << p << endl;
      cout << *p << endl;
      cout << &p << endl;

      delete p;
      cout << p << endl;//still pointervar p points to some random addr.....so use nullptr
      p=nullptr;
      cout << p << endl;//ull get 0

      return 0;
}