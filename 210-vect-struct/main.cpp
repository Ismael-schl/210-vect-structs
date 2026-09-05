#include <iostream>
#include <vector>

using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    Color myColor;
    cout << "Enter your color's red hue value. then press enter: ";
    cin >> myColor.red;
    cout << "Enter your color's green hue value. then press enter: ";
    cin >> myColor.green;
    cout << "Enter your color's blue hue value. then press enter: ";
    cin >> myColor.blue;
    cout << "Red: " << myColor.red << " Green: " << myColor.green << " Blue: " << myColor.blue;
    return 0;
}