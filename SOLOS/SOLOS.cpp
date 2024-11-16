#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point() : x(0), y(0) {}
    Point(int x, int y) : x(x), y(y) {}
    friend ostream& operator<<(ostream& out, const Point& point);
    friend istream& operator>>(istream& in, Point&  point);
};

ostream& operator<<(ostream& out, const Point& point) {
    out << "(" << point.x << ", " << point.y << ")";
    return out;
}
istream& operator>>(istream& in, Point& point) {
    cout << "Input x: ";
    in >> point.x;
    cout << "Input y: ";
    in >> point.y;
    return in;
}

int main() {
    Point p1;
    cout << "Input cordinatos:" << endl;
    cin >> p1;
    cout << "Output point: " << p1 << endl;

    return 0;
}
