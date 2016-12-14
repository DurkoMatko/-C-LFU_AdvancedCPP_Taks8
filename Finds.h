#ifndef FINDS_H
#define FINDS_H

#include <vector>
#include <iostream>

template<typename InputIterator, class T>
class Finds{
	public:
		static std::vector<T> find(InputIterator first, InputIterator last, const T& val);
};

#endif //FINDS_H