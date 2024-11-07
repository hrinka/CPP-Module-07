#include "Array.hpp"
#include <iostream>

int main() {
    try {
        Array<int> emptyArray;
        std::cout << "Empty array size: " << emptyArray.size() << std::endl;

        Array<int> intArray(5);
        std::cout << "Int array size: " << intArray.size() << std::endl;

        // 要素の代入と出力
        for (unsigned int i = 0; i < intArray.size(); ++i) {
            intArray[i] = i * 2;
        }
        for (unsigned int i = 0; i < intArray.size(); ++i) {
            std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
        }

        // コピーコンストラクタをテスト
        Array<int> copiedArray = intArray;
        std::cout << "Copied array:" << std::endl;
        for (unsigned int i = 0; i < copiedArray.size(); ++i) {
            std::cout << "copiedArray[" << i << "] = " << copiedArray[i] << std::endl;
        }

        // 範囲外アクセスのテスト
        std::cout << "Accessing out of bounds element: " << std::endl;
        std::cout << intArray[10] << std::endl;  // 例外
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
