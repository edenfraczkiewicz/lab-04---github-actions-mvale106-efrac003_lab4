#include "../header/rectangle.hpp"

void Rectangle::set_width(int w) {
	this->width = w;
}

void Rectangle::set_height(int h) {
	this->height = h;
}

int Rectangle::area() {
	return this->width * this->height;
}

Rectangle(int w, int h) {
	this->width = w;
	this->height = h;
}

int Rectangle::perimeter() {
	return (2 * (this->width + this->height);
}  

