#include "myclass.h"

Rectangle::Rectangle(int width, int height){
	this->width = width;
	this->height = height;
}

int Rectangle::area(){
	return height * width;
}
