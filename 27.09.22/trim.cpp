#include <iostream>
void rtrim(std::string& str) {
    str.erase(std::find_if(str.rbegin(), str.rend(), [](unsigned char ch) {
            return !std::isspace(ch);
        }).base(), str.end());
}
void ltrim(std::string &s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !std::isspace(ch);
    }));
}
void trim(std::string &s) {
    ltrim(s);
    rtrim(s);
}

int main(){
    std::string name;
    name = "   DRAKARIS     ";
    trim(name);
    std::cout << name << "*" << std::endl;
}
