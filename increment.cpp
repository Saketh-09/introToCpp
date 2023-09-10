#include <iostream>

int main() {
    int a = 5;
    int b = 3;
    int y = a++; //postfix y = 5, a = 6
    std::cout << "y = "<< y;
    std::cout << "a = "<< a;
    int z = ++a; //prefix z = 7, a = 7
    std::cout << "z = "<<z;
    std::cout <<"a = "<< a;

    return 0;
}