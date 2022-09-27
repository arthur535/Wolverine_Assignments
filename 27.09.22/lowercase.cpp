#include <iostream>
void toLowerCase(std::string&);

int main(){
    std::string name;
    name = "valAR MarghulIS";
    toLowerCase(name);
    std::cout << name << std::endl;
}

void toLowerCase(std::string& str) {
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] -= 32;
        }
    }
}
