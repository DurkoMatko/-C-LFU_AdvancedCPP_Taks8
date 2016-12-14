#ifndef FIND_IFS_H
#define FIND_IFS_H

#include <vector>
#include <iostream>

template<typename T, typename InputIterator, class lambda>
class FindIfs{
	public:
		static std::vector<T> find_if(InputIterator first, InputIterator last, lambda predicate);
};

#endif //FIND_IFS_H