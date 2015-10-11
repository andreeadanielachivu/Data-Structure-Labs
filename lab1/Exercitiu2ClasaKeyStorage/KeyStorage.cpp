#include "KeyStorage.h"

template<typename T>
KeyStorage<T>::KeyStorage(int k) {
	this->key = k;
}

template<typename T>
KeyStorage<T>::~KeyStorage() {
}

template<typename T>
T KeyStorage<T>::getMember() {
	return this->key;
}

template<typename T>
T KeyStorage<T>::setMember(T element) {
	this->member = element;
	return this->member;
}

template class KeyStorage<int>;
template class KeyStorage<long>;
template class KeyStorage<double>;
