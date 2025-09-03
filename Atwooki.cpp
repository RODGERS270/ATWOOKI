#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Print a random number
    int number = rand();
    cout << "Random number: " << number << endl;

    // Print a character
    char w = 'P';
    cout << w << endl;

    // Get user's name
    string First_Name, Last_Name;
    cout << "Enter your first and last name: ";
    cin >> First_Name >> Last_Name;
    cout << "My name is " << First_Name << " " << Last_Name << endl;

    // Get a character from user
    char x;
    cout << "Enter a character: ";
    cin >> x;
    cout << "Character entered is " << x << endl;

    // Power calculation
    double b, l;
    cout << "Enter two numbers below 10: ";
    cin >> b >> l;
    double j = pow(b, l);
    cout << "The power of the two numbers entered is " << j << endl;

    // Get a number and print it
    double m;
    cout << "Enter a number: ";
    cin >> m;
    cout << "Number is " << m << endl;

    // Swap two integers and print them
    int a = 2, b2 = 3, temp = a;
    a = b2;
    b2 = temp;
    cout << "After swapping: a = " << a << ", b = " << b2 << endl;

    // Circle area and circumference
    const double pi = 3.14;
    double radius, Area, Circumference;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    Area = pi * pow(radius, 2);
    Circumference = 2 * pi * radius;
    cout << "Area of the Circle is " << Area << endl;
    cout << "Circumference of the Circle is " << Circumference << endl;

    // Final calculation
    double x2, y2, z;
    cout << "Enter two numbers: ";
    cin >> x2 >> y2;
    z = (x2 + 10) / (3 * y2);
    cout << "z is " << z << endl;

    return 0;

}
