#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    // Create an instance of Rectangle
    Rectangle rectan;

    // Prompt user to enter length and width
    float length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Set length and width of the rectangle
    rectan.setLength(length);
    rectan.setWidth(width);

    // Calculate and output area of the rectangle
    cout << "Area of the rectangle: " << rectan.calculateArea() << endl;

    return 0;
}
