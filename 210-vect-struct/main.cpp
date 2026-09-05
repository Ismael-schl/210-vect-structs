#include <iostream>
#include <vector>

using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

Color PopulateColor();
void OutputColor(const Color &c);

int main() {
    Color myColor = PopulateColor();
    cout << "Confirming color values via output: " << endl;
    OutputColor(myColor);
    return 0;
}

Color PopulateColor() {
    Color temp;
    cout << "Enter your color's red hue value. then press enter: ";
    cin >> temp.red;
    cout << "Enter your color's green hue value. then press enter: ";
    cin >> temp.green;
    cout << "Enter your color's blue hue value. then press enter: ";
    cin >> temp.blue;
    return temp;
}

void OutputColor(const Color &c) {
    cout << "\t> Red hue value: " << c.red << endl;
    cout << "\t> Green hue value: " << c.green << endl;
    cout << "\t> Blue hue value: " << c.blue << endl;
}