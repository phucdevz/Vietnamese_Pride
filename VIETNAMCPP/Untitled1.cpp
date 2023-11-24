#include <iostream>

int main() {
    int number;
    std::cout << "Nh?p s?: ";
    std::cin >> number;

    int reversedNumber = 0;
    while (number > 0) {
        reversedNumber = reversedNumber * 10 + number % 10;
        number /= 10;
    }

    std::cout << "S? d?o ngu?c: " << reversedNumber << std::endl;

    return 0;
}

