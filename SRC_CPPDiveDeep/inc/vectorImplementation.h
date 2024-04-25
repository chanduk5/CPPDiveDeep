#pragma once

#include <iostream>
#include <initializer_list>

#include "../inc/includes.h"

template <class T>
class VectorLocal {
private:
  T* arr;
  size_t size;
  size_t capacity;
public:
  VectorLocal(size_t initCapacity = 4) : size(0), capacity(initCapacity) {
    arr = new T[capacity];
  }

  VectorLocal(std::initializer_list<T> list) :
    size(list.size()), capacity(list.size() * sizeof(T)) {
    arr = new T[capacity];
    std::copy(list.begin(), list.end(), arr);
  }

  ~VectorLocal() {
    delete[] arr;
  }

  void push_back(const T& ele) {
    if (size == capacity) {
      capacity = capacity * 4;
      T* newArr = new T[capacity];
      std::copy(arr, arr + size, newArr);
      delete[] arr;
      arr = newArr;
    }
    arr[size++] = ele;
  }

  size_t Size() {
    return size;
  }

  T& get(size_t index) {
    if (index < 0 || index >= size) {
      std::cout << "Index " << index << "out of range";
      exit(1);
    }
    return arr[index];
  }
};