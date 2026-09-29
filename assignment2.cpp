#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, breadth;

public:
    // Function defined inside the class
    void getData()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    // Functions declared inside, defined outside the class
    float area();
    float perimeter();

    void display()
    {
        cout << "\nArea = " << area() << endl;
        cout << "Perimeter = " << perimeter() << endl;
    }
};

// Function defined outside the class
float Rectangle::area()
{
    return length * breadth;
}

// Function defined outside the class
float Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

int main()
{
    Rectangle r;

    r.getData();
    r.display();

    return 0;
}
