#include <iostream>

int main() {
    int a = 5;
    int b = 2;
    a = a+b;
    b = a-b;
    a = a-b;
    std::cout << a;
    std::cout << b;
}