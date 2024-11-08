#include <iostream>
#include "iter.hpp"

void printInt(int& value) {
    std::cout << value << " ";
}

void doubleValue(int& value) {
    value *= 2;
}

void toUpperCase(char& value) {
    if (value >= 'a' && value <= 'z') {
        value -= 'a' - 'A';
    }
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArraySize = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Original int array: ";
    iter(intArray, intArraySize, printInt);
    std::cout << std::endl;

    iter(intArray, intArraySize, doubleValue);

    std::cout << "Doubled int array: ";
    iter(intArray, intArraySize, printInt);
    std::cout << std::endl;

    char charArray[] = "hello world";
    size_t charArraySize = sizeof(charArray) / sizeof(charArray[0]) - 1; // NULL文字を除く

    std::cout << "Original char array: " << charArray << std::endl;
    iter(charArray, charArraySize, toUpperCase);
    std::cout << "Uppercase char array: " << charArray << std::endl;

    return 0;
}
