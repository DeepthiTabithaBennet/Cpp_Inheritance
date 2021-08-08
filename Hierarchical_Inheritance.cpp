#include <iostream>
using namespace std;
/*———————————————————————————————————————————————————————————————————————————*/
class Shape{     // base class
    public:
        int x, y;
        void get_data(int n, int m) {
            x = n;
            y = m;
        }
};
/*———————————————————————————————————————————————————————————————————————————*/
class Rectangle : public Shape {     // derived class 1
    public: 
        int area_rect() {
            int area = x * y;
            return area;
        }
};
/*———————————————————————————————————————————————————————————————————————————*/
class Triangle : public Shape {     // derived class 2
    public:
        int triangle_area() {
        float area = (0.5) * x * y;
        return area;
    }
};
/*———————————————————————————————————————————————————————————————————————————*/
class Square : public Shape {     // derived class 3
    public:
        int square_area() {
        float area = x * x;
        return area;
    }
};
/*———————————————————————————————————————————————————————————————————————————*/
int main() {
    Rectangle r;
    Triangle t;
    Square s;
    
    int length, breadth, base, height, side;
    
    //area of a Rectangle
    cout << "Enter the length and breadth of a Rectangle : ";
    cin >> length >> breadth;
    r.get_data(length, breadth);
    int rect_area = r.area_rect();
    cout << "Area of the rectangle = " << rect_area << " sq. units\n\n";
    
    //area of a triangle
    cout << "Enter the base and height of the Triangle : ";
    cin>>base>>height;
    t.get_data(base,height);
    float tri_area = t.triangle_area();
    cout << "Area of the triangle = " << tri_area << " sq. units\n\n";
   
    //area of a Square
    cout << "Enter the length of one side of the square : ";
    cin >> side;
    s.get_data(side, side);
    int sq_area = s.square_area();
    cout << "Area of the square = " << sq_area << " sq. units\n\n";
    
    return 0;
}
