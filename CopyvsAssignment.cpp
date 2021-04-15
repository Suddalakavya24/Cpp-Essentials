#include<iostream>
#include"cube.h"
using namespace std;
using uiuc::cube;
int main(){
      cube c1;//default cnstructor is invoked
      cube c2=c1;//copy constructed is invoked

      cube c3;// def constr
      cube c4;//def constr
      c3=c4;//No copy constr is invoked
      //THIS IS AN ASSIGNMENT
      //once def constr / any other constr invokes ...no chance fr copy constr to get invoked
      //ASSIGNMENT OP COMES INTP PICTURE
}