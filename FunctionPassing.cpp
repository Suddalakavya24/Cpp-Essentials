//pass by value,pass by reference,pass by pointer
#include <iostream>
#include "cube1.h"
using namespace std;
using uiuc1::cube1;
void func1(cube1 c) //copying took place
{
}
void func2(cube1 &c)
{ //aliasing took place----cube1 &c=c2, that means cube1 ref c got initialized with c2
}
void func3(cube1 *c)
{
}
int main()
{                //***********pass by value***********
      cube1 c1;  //default contr
      func1(c1); //copy constr

      //************pass by ref*************
      cube1 c2;
      func2(c2);

      //***********pass by pointer**********
      cube1 c3;
      func3(&c3);
      return 0;
}