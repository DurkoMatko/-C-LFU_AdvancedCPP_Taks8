#include "Finds.h"
#include <iostream>
#include <vector>

/*template<class InputIterator, class T>
void Finds<InputIterator, T>::find2(InputIterator first, InputIterator last, const T& val){
	std::cout <<"first"<<std::endl;
}*/

template<typename InputIterator, class T>
std::vector<T>  Finds<InputIterator, T>::find(InputIterator first, InputIterator last, const T& val){
	std::vector<T> v;
	while (first!=last) {
    	if (*first==val){
    		//std::cout << "Found " << *first << std::endl;
    		v.push_back(*first);
    	}
    	else
    		//std::cout << *first << std::endl;
    	++first;
  	}
  	return v;
}

/*
template<typename InputIterator, class T>
void Finds<InputIterator, T>::find(InputIterator first, InputIterator last, T val){*/