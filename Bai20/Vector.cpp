#include <iostream>
#include <string>

#include "vector.h"
// Dinh nghia cac phuong thuc co trong lop Vector

using namespace std;

template <class T>
MyVector<T>::MyVector()
{
    this->capacity = 0;
    this->number = 0;
    this->arr = NULL;
}

template <class T>
MyVector<T>::MyVector(int k, T x)
{
    this->capacity = k;
    this->number = k;
    this->arr = new T[k];
    for (int i = 0; i < k; i++)
    {
        this->arr[i] = x;
    }
}
template <class T>
int MyVector<T>::getCapacity()
{
    return this->capacity;
}

template <class T>
int MyVector<T>::size()
{
    return this->number;
}

template <class T>
bool MyVector<T>::empty()
{
    return this->number == 0;
}

template <class T>
void MyVector<T>::pop_back()
{
    if (!empty())
    {
        this->number--;
    }
}

template <class T>
void MyVector<T>::resize(int newCapacity)
{
    if (newCapacity < this->capacity)
    {
        return;
    }
    this->capacity = newCapacity;
    T *temp = new T[this->capacity];
    for (int i = 0; i < number; i++)
    {
        temp[i] = arr[i];
    }

    if (this->arr != NULL)
    {
        delete[] this->arr;
    }

    this->arr = temp;
}

template <class T>
T &MyVector<T>::back()
{
    return this->arr[number - 1];
}

template <class T>
T &MyVector<T>::operator[](int k)
{
    return this->arr[k];
}

template <class T>
void MyVector<T>::push_back(T x)
{
    if (this->number == this->capacity)
    {
        resize(this->capacity * 2 + 2);
    }

    arr[number] = x;
    number++;
}

template <class T>
void MyVector<T>::insert(int k, T x)
{
    if (this->number == this->capacity)
    {
        resize(this->capacity * 2 + 2);
    }

    for (int i = this->number; i > k; i--)
    {
        this->arr[i] = this->arr[i - 1];
    }

    this->arr[k] = x;
    this->number++;
}

template <class T>
MyVector<T> &MyVector<T>::operator=(MyVector<T> a)
{
    this->capacity = a.capacity;
    this->number = a.number;

    if (capacity)
    {
        this->arr = new T[capacity];
        for (int i = 0; i < number; i++)
        {
            this->arr[i] = a.arr[i];
        }
    }
    else
    {
        this->arr = 0;
    }

    return *this;
}

template <class T>
T *MyVector<T>::begin()
{
    return this->arr;
}

template <class T>
T *MyVector<T>::end()
{
    return this->arr + this->number;
}

template <class T>
T *MyVector<T>::rbegin()
{
    return this->arr + this->number;
}

template <class T>
T *MyVector<T>::rend()
{
    return this->arr;
}

template <class T>
void MyVector<T>::erase(T *it)
{
    if (number == 0)
        return;
    for (; it != arr + number; it++)
    {
        *it = *(it + 1);
    }
    number--;
}
   

