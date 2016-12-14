#include "FindIfs.h"
#include <iostream>
#include <vector>

template<typename T, typename InputIterator, class lambda>
std::vector<T> FindIfs<T,InputIterator, lambda>::find_if(InputIterator first, InputIterator last,lambda predicate){
    std::vector<T> v;
    int count = 0;
    while (first!=last) {
      if(predicate(*first)){
        v.push_back(*first);
      }
      first++;
      count++;
    }

    return v;
 }

