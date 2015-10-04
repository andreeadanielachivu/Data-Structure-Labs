#include "MyArrayList.h"
#include <stdio.h>
#include <stdlib.h>
template <typename T>
MyArrayList<T>::MyArrayList(int capacity){
	this->my_size = 0;
	this->my_capacity = capacity;
	this->buffer = new T[this->my_capacity*sizeof(T)];
	//this->buffer = (T *)malloc(this->my_capacity*sizeof(T));
}

template <typename T>
MyArrayList<T>::~MyArrayList(){
	delete[] this->buffer;
}

template <typename T>
T* MyArrayList<T>::redimension(){
	T *buffer_second;
	int i;
	this->my_capacity = this->my_capacity * 2;
	//buffer_second = (T *)malloc(this->my_capacity * sizeof(T));
	buffer_second = new T[this->my_capacity*sizeof(T)];
	for (i = 0; i < my_size; i++){
		buffer_second[i] = this->buffer[i];
	}
	return buffer_second;
}

template <typename T>
T* MyArrayList<T>::add(T element){
	if (this->my_size == this->my_capacity){
		this->buffer = this->redimension();
		printf("hereeee\n");
	}
	this->buffer[this->my_size] = element;
	this->my_size++;
	return this->buffer;
}

template <typename T>
T* MyArrayList<T>::getVector(){
	return this->buffer;
}

template <typename T>
int MyArrayList<T>::getSize(){
	return this->my_size;
}

template class MyArrayList<int>;
template class MyArrayList<long>;
template class MyArrayList<float>;