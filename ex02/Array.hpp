#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept> 
#include <iostream>

template <typename T>
class Array {
public:
    Array() : size_(0), data_(NULL) {}

    // サイズ指定コンストラクタ
    Array(unsigned int n) : size_(n), data_(new T[n]()) {}

    Array(const Array& other) : size_(other.size_), data_(new T[other.size_]) {
        for (unsigned int i = 0; i < size_; ++i) {
            data_[i] = other.data_[i];
        }
    }

    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] data_; 
            size_ = other.size_;
            data_ = new T[size_];
            for (unsigned int i = 0; i < size_; ++i) {
                data_[i] = other.data_[i];
            }
        }
        return *this;
    }

    ~Array() {
        delete[] data_;
    }

    // 要素アクセス用の[]演算子
    T& operator[](unsigned int index) {
        if (index >= size_) {
            throw std::out_of_range("Index out of bounds");
        }
        return data_[index];
    }

    // 要素アクセス用の[]演算子（const版）
    const T& operator[](unsigned int index) const {
        if (index >= size_) {
            throw std::out_of_range("Index out of bounds");
        }
        return data_[index];
    }

    unsigned int size() const {
        return size_;
    }

private:
    unsigned int size_;
    T* data_;
};

#endif
