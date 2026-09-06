#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <iomanip>

using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

Color PopulateColor();
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
    temp.red = rand() % (255+1);
    temp.green = rand() % (255+1);
    temp.blue = rand() % (255+1);
    return temp;
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
    cout << left << setw(20) << "Color#" << setw(20) << "R Value" << setw(20) << "G Value" << setw(20) << "B Value" << endl;
    cout << left << setw(20) << "------" << setw(20) << "-------" << setw(20) << "-------" << setw(20) << "-------" << endl;
    for (int j = 0; j < colors.size(); j++) {
        cout << left << setw(20) << (j+1)
            << setw(20) << colors[j].red
            << setw(20) << colors[j].green
            << setw(20) << colors[j].blue
            << endl;
    }
}