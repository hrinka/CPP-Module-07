#include "iter.hpp"
#include <iostream>
#include <string>

// テスト用関数
void printInt(int& n) {
    std::cout << n << " ";
}

void incrementInt(int& n) {
    n += 1;
}

void printString(std::string& str) {
    std::cout << str << " ";
}

// void printInt(int& n);
// void incrementInt(int& n);
// void printString(std::string& str);

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Original intArray: ";
    iter(intArray, intArrayLength, printInt);
    std::cout << std::endl;

    std::cout << "Incremented intArray: ";
    iter(intArray, intArrayLength, incrementInt);
    iter(intArray, intArrayLength, printInt);
    std::cout << std::endl;

    std::string strArray[] = {"hello", "world", "iter", "template"};
    size_t strArrayLength = sizeof(strArray) / sizeof(strArray[0]);

    std::cout << "String array: ";
    iter(strArray, strArrayLength, printString);
    std::cout << std::endl;

    return 0;
}
