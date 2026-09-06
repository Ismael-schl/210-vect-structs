#include <iostream>
#include <vector>
#include <random>
#include <ctime>

using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

Color PopulateColor();
void OutputColor(const Color &c);
void PopulateVector(vector<Color> &colors);
void OutputVector(vector<Color> &colors);

int main() {
    srand(time(0));
    vector<Color> colors;
    PopulateVector(colors);
    OutputVector(colors);
    return 0;
}

Color PopulateColor() {
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
    int n = rand() % (50-25+1)+25;
    Color rands;
    for (int i = 0; i < n; ++i){ 
        rands = PopulateColor();
        colors.push_back(rands);
    }
}
void OutputVector(vector<Color> &colors) {
    for (int j = 0; j < colors.size(); j++) {
        cout << endl << "Red: " << colors[j].red << endl << "Green: " << colors[j].green << endl << "Blue: " << colors[j].blue << endl;
}
}