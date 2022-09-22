#include <iostream>
#include <map>
double sum(double a, double b){return a+b;}
double mul(double a, double b){return a*b;}
double div(double a, double b){return a/b;}
double sub(double a, double b){return a-b;}

int main(){
    std::map<char,double(*)(double,double)> calculator;
    double a,b;
    std::cin >> a;
    char oper;
    std::cin >> oper;
    std::cin >> b;
    calculator['+'] = &sum;
    calculator['-'] = &sub;
    calculator['*'] = &mul;
    calculator['/'] = &div;
    std::cout << "=" <<calculator[oper](a,b) << std::endl;
}

