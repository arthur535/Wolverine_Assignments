#include <iostream>
using namespace std;
#include <map>
enum Cities{Yerevan = 0, Tokio, Chicago, Rome, Paris, Chernobyl};
std::string tostring(Cities obj) {
    switch (obj) {
        case Yerevan:   return "Yerevan";
        case Tokio:     return "Tokio";
        case Chicago:   return "Chicago";
        case Paris:     return "Paris";
        case Rome:      return "Rome";
        case Chernobyl: return "Chernobyl";
        default:        return "Invalid city";
    }
}
int main() {
    std::map<Cities, std::string> ht;
    Cities obj = Cities(0);
    for (int num = 0; num < 6; ++num) {
        ht[(Cities)num] = tostring((Cities)num);
        std::cout << ht[Cities(num)] << std::endl;
    }
}
