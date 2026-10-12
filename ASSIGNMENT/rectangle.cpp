
#include <iostream>

using namespace std;

class Rectangle
{
    private:
        double length;
        double width;

    public:
        // Functions for setting the dimensions
        void set_dimensions(double l, double w)
        {
            length = l;
            width = w;
        }

        // Functions for retrieving the dimensions
        double get_length()
        {
            return length;
        }

        double get_width()
        {
            return width;
        }

        // Function for calculating area
        double area()
        {
            return length * width;
        }

        // Function for calculating perimeter
        double perimeter()
        {
            return 2 * (length + width);
        }
};

int main()
{
    // Create the first Rectangle object
    Rectangle rectangle1;

    // Set the dimensions of the rectangle
    rectangle1.set_dimensions(5.0, 3.0);

    // Display the dimensions, area and perimeter
    cout << "Rectangle 1" << endl;
    cout << "Length: " << rectangle1.get_length() << endl;
    cout << "Width: " << rectangle1.get_width() << endl;
    cout << "Area: " << rectangle1.area() << endl;
    cout << "Perimeter: " << rectangle1.perimeter() << endl << endl;

    // Create the second Rectangle object
    Rectangle rectangle2;

    // Set the dimensions of the rectangle
    rectangle2.set_dimensions(10.0, 4.0);

    // Display the dimensions, area and perimeter
    cout << "Rectangle 2" << endl;
    cout << "Length: " << rectangle2.get_length() << endl;
    cout << "Width: " << rectangle2.get_width() << endl;
    cout << "Area: " << rectangle2.area() << endl;
    cout << "Perimeter: " << rectangle2.perimeter() << endl << endl;

    // Create the third Rectangle object
    Rectangle rectangle3;

    // Set the dimensions of the rectangle
    rectangle3.set_dimensions(35.5, 36.0);

    // Display the dimensions, area and perimeter
    cout << "Rectangle 3" << endl;
    cout << "Length: " << rectangle3.get_length() << endl;
    cout << "Width: " << rectangle3.get_width() << endl;
    cout << "Area: " << rectangle3.area() << endl;
    cout << "Perimeter: " << rectangle3.perimeter() << endl;

    return 0;
}

