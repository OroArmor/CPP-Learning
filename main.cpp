#include <iostream>
#include "myclass.h"
#include "print.h"

int main() {
	std::cout << "Hello, World!" << std::endl;
	print("line 2");	
	println(" not line 3");
	println("this is line 3");
	
	Rectangle rect(3, 4);

	print("Area: ");
	println(std::to_string(rect.area()));

	return 0;
}
