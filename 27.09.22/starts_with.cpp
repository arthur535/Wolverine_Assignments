#include <iostream>
bool startsWith(const std::string&,const std::string&);

int main() {
    std::cout << startsWith("John Snow", "Jo") << std::endl;
    std::string str = "Hello World";
    std::string part = "Hi";
    std::cout << startsWith(str, part) << std::endl;
    std::cout << startsWith("Hola", "Vivaldi");
}

bool startsWith(const std::string& str,const std::string& part) {
    if (part.size() > str.size()) {
        perror("size of part is bigger than size of string");
        exit(1);
    }
    for (int i = 0; i < part.size(); ++i) {
        if (part[i] != str[i]) {
            return false;
        }
    }
    return true;
}
