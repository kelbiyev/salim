#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main (){
	/*
	std::vector <int> data {1,2,3,4,5};
	std::cout <<data.capacity()<<"\n";
		data.push_back(6);
	std::cout <<data.capacity()<<"\n";
	*/
	
	
	/*
	std::vector <std::string> words;
	size_t words_count;
	std::cin >> words_count;
	words.reserve(words_count);
	for (size_t i = 0 ; i!= words_count; ++i){
		std::string word;
		std::cin >> word;
		words.push_back(word); // добавление элементов в контейнер
	}
	for(std::string elem: words){
		std::cout<<elem<<" ";
	}
	*/
	
	
	/*
	std::vector <int> data {1,2,3,4,5};
	data.reserve(10);
	data.resize(3);
	
	for(int elem: data){
		std::cout<<elem<<" ";
	}
	
	data.resize(6);
	
	for(int elem: data){
		std::cout<<elem<<" ";
	}
	*/
	
	/*
	std::vector<std::vector<int>> matrix;
		(m, std::vector<int>(n));
	*/
	
	/*
	std::vector<int> data {3 ,42 ,6 ,8,345,1};
	std::sort(data.begin() , data.end());
	std::ranges::sort(data);
	std::sort(data.rbegin() , data.rend()); //Сортировка в убывающем порядке
	for(int elem: data){
		std::cout<<elem<<" ";
	}
	*/
	
	//строки
	
	/*
	std::string s = "Some string";
	s += ' ';
	s += "functions";
	std::cout<<s<<"\n";
	*/
	
	return 0;
	
}
