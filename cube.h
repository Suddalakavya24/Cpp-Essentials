#pragma once
namespace uiuc
{
      class cube
      {
      public:
            cube();                           //default constructor
            cube(const cube &obj);            //copy constructor
            cube &operator=(const cube &obj); //Assignment operator function
            int length;
            int height;
            int width;
            int volume(int l, int h, int w);
            int area(int l, int w);
      };
      cube::cube()
      {
            length = 1;
            width = 1;
            height = 1;
            std::cout << "default constructor invoked!!!" << std::endl;
      }
      cube::cube(const cube &obj)
      {
            length = obj.length; //we are copying the length of object sent to that of new cube
            std::cout << "copy constructor invoked!!!" << std::endl;
      }
      cube &cube::operator=(const cube &obj)
      {
            length = obj.length;
            std::cout << "Assignment operator invoked" << std::endl;
            return *this;
      }
      int cube::volume(int l, int h, int w)
      {
            return l * h * w;
      }
      int cube::area(int l, int w)
      {
            return l * w;
      }
} // namespace uiuc