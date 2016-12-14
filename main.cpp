#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <array>
#include <string>
#include <iterator>
#include <algorithm>
#include "Finds.cpp"
#include "FindIfs.cpp"

template <typename T>
void printVector(std::vector<T>& v){
	for (auto it = v.begin(); it != v.end(); ++it){
    	std::cout << *it;
    	if(it+1 != v.end())
    		std::cout << ", ";
    }

    std::cout << std::endl;
}


int main(){
	std::vector<int> vector = {1,2,3,4,5};
	auto resVec = Finds<std::vector<int>::iterator,int>::find(vector.begin(),vector.end(),4);
	printVector(resVec);

	std::vector<std::string> vector2 = {"one","two","tree","four"};
	auto resVec2 = Finds<std::vector<std::string>::iterator,std::string>::find(vector2.begin(),vector2.end(),"four");
	printVector(resVec2);

	std::list<double> list = {6.3,7.1,8.1,9.7,10.0};
	auto resList = Finds<std::list<double>::iterator,double>::find(list.begin(),list.end(),9.7);
	printVector(resList);

	std::array<int,5> array = { 2, 16, 77, 34, 50 };
	auto resArr = Finds<std::array<int,5>::iterator,int>::find(array.begin(),array.end(),50);
	printVector(resArr);

	std::set<int> set {5,4,3,2,1};
	auto resSet = Finds<std::set<int>::iterator,int>::find(set.begin(),set.end(),3);
	printVector(resSet);


	//prints just elements of collection which are even in order
	auto even = [](int count){
		if(count % 2 ==0)
			return true;
		return false;
	};
	std::vector<int> result =  FindIfs<int,std::vector<int>::iterator, decltype(even)>::find_if(vector.begin(),vector.end(),even);  //std::bind(even, std::placeholders::_1,50)
	printVector(result);

   	std::string limit = "limit";
   	//returns true if value is bigger than limit
   	auto generic = [&limit](const auto& value){
		return (value > limit);
	};

	//test test_if for array of strings
    std::array<std::string,4> array2{"this","is","another","test"};
    std::vector<std::string> result2 =  FindIfs<std::string,std::array<std::string,4>::iterator, decltype(generic)>::find_if(array2.begin(),array2.end(),generic);  //std::bind(even, std::placeholders::_1,50)
	//should print only "this" and "test"
	printVector(result2);
}