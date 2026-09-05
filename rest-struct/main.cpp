#include <iostream>

using namespace std;

struct Resturaunt {
    int phoneNumber;
    string streetName;
    bool fastFood;
    int priceRange;
    string genre;
};

Resturaunt populateResturaunt();
void outputResturaunt(const Resturaunt &);

int main() {
    Resturaunt myRest = populateResturaunt();
    
}

Resturaunt populateResturaunt() {
    
}