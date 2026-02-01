#include <iostream>

using namespace std;

class Circle {
private:
    double radius;
    double pi;

public:
    Circle() {
        radius = 0.0;
        pi = 3.14159;
    }

    void setRadius(double r) {
        if (r >= 0) {
            radius = r;
        } else {
            cout << "Invalid radius. Defaulting to 0." << endl;
            radius = 0;
        }
    }

    double getRadius() {
        return radius;
    }

    double getArea() {
        return pi * radius * radius;
    }

    double getDiameter() {
        return radius * 2;
    }

    double getCircumference() {
        return 2 * pi * radius;
    }
};

int main() {
    Circle myCircle;
    double r;

    cout << "Enter the radius of the circle: ";
    cin >> r;

    myCircle.setRadius(r);

    cout << "\n--- Circle Results ---" << endl;
    cout << "Radius:        " << myCircle.getRadius() << endl;
    cout << "Diameter:      " << myCircle.getDiameter() << endl;
    cout << "Area:          " << myCircle.getArea() << endl;
    cout << "Circumference: " << myCircle.getCircumference() << endl;

    return 0;
}
