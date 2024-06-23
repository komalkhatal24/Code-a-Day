// Sample Input

// 10 5
// Sample Output

// 10 5
// 50
// Explaination

// As, width = 10 and height = 5, so area = width x height = 50

// Solution

#include <iostream>

using namespace std;

class Rectangle {
protected:
    int width;
    int height;

public:
    void display() {
        cout << width << " " << height << endl;
    }
};

class RectangleArea : public Rectangle {
public:
    void read_input() {
        cin >> width >> height;
    }

    void display() {
        cout << width * height << endl;
    }
};


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea area;
    
    /*
     * Read the width and height
     */
    area.read_input();
   area.Rectangle::display();
area.display();
    
    return 0;
}