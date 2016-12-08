#ifndef FINDS_H
#define FINDS_H

#include <vector>

template<typename InputIterator, class T>
class Finds{
	public:
		static std::vector<T> find(InputIterator first, InputIterator last, const T& val);
		//static void find_if(InputIterator first, InputIterator last, T predicate);
};

#endif //FINDS_H