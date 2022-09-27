#include <iostream>
void ltrim(std::string& str) {
    str.erase(std::find_if(str.rbegin(), str.rend(), [](unsigned char ch) {
            return !std::isspace(ch);
        }).base(), str.end());
}

int main(){
    std::string name;
    name = "DRAKARIS     ";
    ltrim(name);
    std::cout << name << "*" << std::endl;
}
