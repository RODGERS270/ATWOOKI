#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;
    cout << "Please enter your two names: ";
    getline(cin, fullName); // Reads full line including spaces
    cout << "You entered: " << fullName << endl;
    cout<<"Hello World!" <<endl;
    return 0;
}