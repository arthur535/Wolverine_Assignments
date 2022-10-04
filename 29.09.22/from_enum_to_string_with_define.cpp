#include <iostream>

#define stringify(name) #name

using namespace std;

enum Universe{Earth,Water,Air,Fire};

string convert_enum[] = {
    stringify(Earth),
    stringify(Water),
    stringify(Air),
    stringify(Fire)
};

string to_string( Universe item ) {
     return convert_enum[ item ];
}

int main() {
    cout << "Enum items are: ";
    cout << to_string(Universe::Earth) << " ";
    cout << to_string(Universe::Water) << " ";
    cout << to_string(Universe::Air) << " ";
    cout << to_string(Universe::Fire) << "\n";
    return 0;
}
