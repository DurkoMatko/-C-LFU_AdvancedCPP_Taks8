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


int main(){
	std::vector<int> vector = {1,2,3,4,5};
	auto resVec = Finds<std::vector<int>::iterator,int>::find(vector.begin(),vector.end(),4);

	std::vector<std::string> vector2 = {"one","two","tree","four"};
	auto resVec2 = Finds<std::vector<std::string>::iterator,std::string>::find(vector2.begin(),vector2.end(),"four");

	std::list<int> list = {6,7,8,9,10};
	auto resList = Finds<std::list<int>::iterator,int>::find(list.begin(),list.end(),9);

	std::array<int,5> array = { 2, 16, 77, 34, 50 };
	auto resArr = Finds<std::array<int,5>::iterator,int>::find(array.begin(),array.end(),50);

	std::set<int> set {5,4,3,2,1};
	auto resSet = Finds<std::set<int>::iterator,int>::find(set.begin(),set.end(),3);

	std::map<int,int> map;
	map[0]=0;
	map[1]=1;
	map[2]=2;
	map[3]=3;
	map[4]=4;
	std::pair<int,int> p = std::make_pair(3,3);
	/*Finds<std::map<int,int>::iterator,std::pair<int,int>>::find(map.begin(),map.end(),p);*/

	//auto dd = Finds<std::vector<int>::iterator,auto>::find_if(vector.begin(),vector.end(),[=](int element){ return 1;});
}