// Complete this program

#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int choice;
  double width, height, radius;
  double area;

  cout << "Geometry Calculator\n";
  cout << "\t1. Calculate the Area of Circle\n";
  cout << "\t2. Calculate the Area of Rectangle\n";
  cout << "\t3. Calculate the Area of Triangle\n";
  cout << "\t4. Quit\n\n";
  cout << "Enter your choice (1-4): ";
  cin >> choice;

  //************************
  // Your code
  //************************

  if (choice == 1) {
    cout << "Enter radius ";
    cin >> radius;
    area = 3.145 * pow(radius, 2);
    cout << area << endl;
  }
  if (choice == 2) {
    cout << "Enter width and height ";
    cin >> height >> width;
    area = height * width;
    cout << area << endl;
  }
  if (choice == 3) {
    cout << "Enter width and height ";
    cin >> width >> height;
    area = width * height * 0.5;
    cout << area << endl;
  }
  if (choice == 4) {

    cout << "Program Stopped";
  }
}
