#include <iostream>
#include <vector>
#include <string>
int main() {
	int x;
	std::vector<int> data;
	while (std::cin >> x){
		data.push_back(x);
	}
	for (int el : data){
		std::cout<<el<<" ";
	}
	while(!data.empty() && data.back() == 0){
		data.pop_back();
	}for (int elem:data) {
		std::cout <<elem<< " ";
	}
	
	
	//range based for (for(<tip dannix> , <nazvaniye> : <konteynir>)
	
	
	/*
	for (int elem:data) {
		std::cout <<elem<< " ";

	}
	*/
	
	/*
	std::cout<<"\n";	
	std::vector<std::string> v1;
	std::vector<std::string> v2(5);
	std::vector<std::string> v3 (5 , "Hello");
	*/
	
		/*
		int a = data[0];
		int b = data [4];
		data [2] = -3;
		*/
		
		
			/*std::cout<<data.at(0)<<"\n";
			std::cout<<data.at(42)<<"\n";
			std::cout <<data.size()<<"\n";
			*/
			
	/*
	std::cout<<data.front()<<"\n";
	std::cout<<data.back()<<"\n";
	int *t = data.data();
	*/
	
	//perviy data - metod , vtoroy data nazvanie konteynira
	
	
		return 0;
	}
