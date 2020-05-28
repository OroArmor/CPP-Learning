#include <iostream>
#include "learning/Rectangle.h"
#include "common/print.h"

int main() {
	std::cout << "Hello, World!" << std::endl;
	print("line 2");	
	println(" not line 3");
	println("this is line 3");
	
	Rectangle rect(3, 4);

	print("Area: ");
	println(std::to_string(rect.area()));

	print("Perimeter: ");
	println(std::to_string(rect.perimeter()));

	return 0;
}
