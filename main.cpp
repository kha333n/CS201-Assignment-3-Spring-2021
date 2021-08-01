/******************************************************************************

/*
 * Copyright (c) 2021. 
 * Usman Khan
 * https://github.com/kha333n
 * kha333n@gmail.com
 */

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

#define PI 3.14159

class Circle
{
private:
  float radius;


public:

    Circle ()
  {
    radius = 5.6;
  }

  void setRadius (float radius)
  {
    radius = radius;
  }

  void computeAreaCirc ()
  {
    cout << "Area of the circle is: " << PI * (radius * radius) << endl;
    cout << "Circumference of the circle is: " << 2 * PI * radius << endl;
  }
};

class Rectangle
{
private:
  float length;
  float width;

public:

    Rectangle ()
  {
    length = 5.0;
    width = 4.0;
  }

  void setLength (int length)
  {
    length = length;
  }

  void setWidth (int width)
  {
    width = width;
  }

  void computeArea ()
  {
    cout << "Area of rectangle is: " << length * width << endl;
  }
};

int
main ()
{
  int menuEntry = 0;
  char exitChoice = 'A';



  do
    {

      cout << "1: Calculate area and circumference of circle" << endl;
      cout << "2: Calculate area of rectangle" << endl;
      cout << "Select your desired option (1-2)" << endl;

      std::cin >> menuEntry;

      if (menuEntry == 1)
	{
	  Circle c;
	  c.computeAreaCirc ();


	  cout << "Do you want to perform any othe calculation(Y/N): " <<
	    endl;
	  cin >> exitChoice;
	}
      else if (menuEntry == 2)
	{
	  Rectangle r;
	  r.computeArea ();


	  cout << "Do you want to perform any othe calculation(Y/N): " <<
	    endl;
	  cin >> exitChoice;
	}
      else
	{
	  cout << "Invalid Choice! Please Select from 1 or 2: " << endl;
	}
    }
        while (exitChoice == 'Y' || exitChoice == 'y');

}
