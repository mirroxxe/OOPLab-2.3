#include <iostream>
#include "Money.h"

int main() {
    Money m1;
    m1.Read();

    Money m2;
    m2.Read();

    Money m3 = m1 + m2;
    Money m4 = m1 / 2;
    Money m5 = m1 / 2.5;

    std::cout << "m1: ";
    m1.display();
    std::cout << std::endl;

    std::cout << "m2: ";
    m2.display();
    std::cout << std::endl;

    std::cout << "m1 + m2: ";
    m3.display();
    std::cout << std::endl;

    std::cout << "m1 / 2: ";
    m4.display();
    std::cout << std::endl;

    std::cout << "m1 / 2.5: ";
    m5.display();
    std::cout << std::endl;

    return 0;
}
