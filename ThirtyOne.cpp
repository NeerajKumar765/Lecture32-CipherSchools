#include <iostream>
using namespace std;

// Class definition for Rectangle
class Rectangle {
private:
    // Private member variables
    double length;
    double width;

public:
    // Constructor to initialize the rectangle with length and width
    Rectangle(double len, double wid) {
        length = len;
        width = wid;
    }

    // Member function to calculate the area of the rectangle
    double area() {
        return length * width;
    }

    // Member function to calculate the perimeter of the rectangle
    double perimeter() {
        return 2 * (length + width);
    }

    // Member function to display the dimensions of the rectangle
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

int main() {
    // Creating an object of Rectangle class
    Rectangle rect1(10.0, 5.0);

    // Displaying the details of the rectangle
    rect1.display();

    return 0;
}
