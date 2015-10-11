#include "MyArrayList.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

template <typename T>
MyArrayList<T>::MyArrayList(int capacity)
{
	this->my_size = 0;
	this->my_capacity = capacity;
	this->buffer = new T[this->my_capacity * sizeof(T)];
}

template <typename T>
MyArrayList<T>::~MyArrayList()
{
	delete [] this->buffer;
}

template <typename T>
T* MyArrayList<T>::addElement(T element)
{
	if (this->my_size == this->my_capacity)
	{
		this->buffer = this->redimension();
	}
	this->buffer[this->my_size] = element;
	this->my_size++;
	return this->buffer;
}

template <typename T>
T* MyArrayList<T>::redimension()
{
	this->my_capacity = this->my_capacity * 2;
	T* vector_double;
	vector_double = new T[this->my_capacity * sizeof(T)];
	memcpy(vector_double, this->buffer, (this->my_size + 1) * sizeof(T));
	return vector_double;	
}

template <typename T>
T* MyArrayList<T>::getVector()
{
	return this->buffer;
} 

template <typename T>
int MyArrayList<T>::getSize()
{
	return this->my_size;
}

template <typename T>
int MyArrayList<T>::getCapacity()
{
	return this->my_capacity;
}

template class MyArrayList<int>;
template class MyArrayList<long>;
template class MyArrayList<float>;
template class MyArrayList<double>;
