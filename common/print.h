#include <iostream>

void print(std::string data){
	std::cout << data;
}

void println(std::string data){
	print(data);
	std::cout << std::endl;
}
