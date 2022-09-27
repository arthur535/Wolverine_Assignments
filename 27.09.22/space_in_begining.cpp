#include <iostream>
void ltrim(std::string& str) {
    str.erase(str.begin(), std::find_if(str.begin(), str.end(), [](char ch) {return !std::isspace(ch);}));
}

int main(){
    std::string name;
    name = "    DRAKARIS";
    ltrim(name);
    std::cout << name << std::endl;
}
