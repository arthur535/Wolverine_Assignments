#include <iostream>
void rtrim(std::string& str) {
    str.erase(std::find_if(str.rbegin(), str.rend(), [](unsigned char ch) {
            return !std::isspace(ch);
        }).base(), str.end());
}

int main(){
    std::string name;
    name = "DRAKARIS     ";
    rtrim(name);
    std::cout << name << "*" << std::endl;
}
