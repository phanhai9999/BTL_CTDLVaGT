#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <string>

template <class T>
class MyVector
{
private:
    // capacity: suc chua toi da
    // number: so phan tu muon them
    int capacity, number;
    T *arr;
public:
    // Ham tao khong doi 
    MyVector();

    // Ham tao co doi
    MyVector(int k, T x);

    // Ham huy
    //~MyVector();

    // Suc chua
    int getCapacity();

    // Kich co
    int size();

    // Kiem tra rong
    bool empty();

    // Xoa phan tu dang sau
    void pop_back();

    // Xoa phan tu o vi tri k
    void erase(T *it);

    // Mo rong suc chua
    void resize(int newCapacity);

    // Tra lai phan tu cuoi cung
    T &back();

    // Nap chong toan tu truy cap phan tu theo vi tri
    T &operator[](int k);

    // Them phan tu dang sau
    void push_back(T x);

    // Chen phan tu vao vi tri bat ki
    void insert(int k, T x);

    // Nap chong toan tu bang
    MyVector &operator=(MyVector<T> a);

    // Tra ve con tro den vi tri dau cua vector
    T* begin();
    T* end();

    // Reverse iterator
    T* rbegin();
    T* rend();
};

#endif