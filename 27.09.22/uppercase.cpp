#include <iostream>
void toUpperCase(std::string&);

int main(){
    std::string name;
    name = "vaLAR DOHaeriS";
    toUpperCase(name);
    std::cout << name << std::endl;
}

void toUpperCase(std::string& str) {
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] += 32;
        }
    }
}
