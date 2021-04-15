#pragma once
#include <iostream>
namespace uiuc1
{
      class cube1
      {
      public:
            cube1();
            cube1(int length);                  //default constructor
            cube1(const cube1 &obj);            //copy constructor
            cube1 &operator=(const cube1 &obj); //Assignment operator function
            ~cube1();                    //destructor
            int length;
            int height;
            int width;
            int volume() const;
            int area(int l, int w);
      };
      cube1::cube1()
      {
            length = 1;
            width = 1;
            height = 1;
            std::cout << "default constructor invoked!!!" << std::endl;
      }
      cube1::cube1(int l)
      {
            length = l;
            std::cout << "Created $ " << volume() << std::endl;
      }
      cube1::~cube1()
      {
            //destructor
            std::cout << "Destroyed $ " << volume() << std::endl;
      }
      cube1::cube1(const cube1 &obj)
      {
            length = obj.length; //we are copying the length of object sent to that of new cube
            std::cout << "Created $ " << volume() << " via copy" << std::endl;
      }
      cube1 &cube1::operator=(const cube1 &obj)
      {
            length = obj.length;
            std::cout << "Transformed $ " << volume() << " ---> $ " << obj.volume() << std::endl;
            return *this;
      }
      int cube1::volume() const
      {
            {
                  return length * length * length;
            }
      }
      int cube1::area(int l, int w)
      {
            return l * w;
      }

} // namespace uiuc1