#include <iostream>
#include <vector>
#include <random>

using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

Color PopulateColor();
void OutputColor(const Color &c);
void PopulateVector(vector<Color> &colors);

int main() {
    vector<Color> colors;
    Color myColor = PopulateColor();
    colors.push_back(myColor);
    cout << "Confirming color values via output: " << endl;
    OutputColor(colors[0]);
    return 0;
}

Color PopulateColor() {
    srand(time(0));
    Color temp;
    temp.red = rand();
    temp.green = rand();
    temp.blue = rand();
    return temp;
}

void OutputColor(const Color &c) {
    cout << "\t> Red hue value: " << c.red << endl;
    cout << "\t> Green hue value: " << c.green << endl;
    cout << "\t> Blue hue value: " << c.blue << endl;
}
void PopulateVector(vector<Color> &colors){
    srand(time(0));
    int n = rand() % (50-25+1)+25;
    Color rands;
    for (int i = 0; i < n; ++i){ 
        rands = PopulateColor();
        colors[i] = rands;
    }

}